//
// Created by raver119 on 16.10.2017.
//

#ifndef LIBND4J_LEGACYREDUCEOP_H
#define LIBND4J_LEGACYREDUCEOP_H

#include <ops/declarable/LegacyOp.h>

namespace nd4j {
    namespace ops {
        template <typename T>
        class ND4J_EXPORT LegacyReduceOp : public LegacyOp<T> {
        protected:
            Nd4jStatus validateAndExecute(Context<T>& block);
        public:
            LegacyReduceOp();
            LegacyReduceOp(int opNum);

            ShapeList* calculateOutputShape(ShapeList* inputShape, nd4j::graph::Context<T>& block);
            virtual LegacyOp<T>* clone();
        };
    }
}


#endif //LIBND4J_LEGACYREDUCEOP_H
