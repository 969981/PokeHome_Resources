/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00426E0C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00526e0c; name: FUN_.text__00526e0c
 */


void FUN__text__00526e0c(long param_1,long param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_34; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_2c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_20; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = *(long *)(param_2 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((lVar1 != 0) && // [自动静态注释] 条件判断/分支
     ((((((0.0010000000474974513 <= ABS(*(double *)(param_3 + 0x78) - *(double *)(lVar1 + 0x78)) || // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          (0.0010000000474974513 <= ABS(*(double *)(param_3 + 0x80) - *(double *)(lVar1 + 0x80)))) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
         || (0.0010000000474974513 <= ABS(*(double *)(param_3 + 0x88) - *(double *)(lVar1 + 0x88)))) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        || ((0.001 <= ABS(*(float *)(param_3 + 0x60) - *(float *)(lVar1 + 0x60)) || // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            (0.001 <= ABS(*(float *)(param_3 + 100) - *(float *)(lVar1 + 100)))))) || // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
       ((0.001 <= ABS(*(float *)(param_3 + 0x68) - *(float *)(lVar1 + 0x68)) || // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        ((0.001 <= ABS(*(float *)(param_3 + 0x6c) - *(float *)(lVar1 + 0x6c)) || // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
         (0.001 <= ABS(*(float *)(param_3 + 0x70) - *(float *)(lVar1 + 0x70)))))))) || // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      (0.001 <= ABS(*(float *)(param_3 + 0x74) - *(float *)(lVar1 + 0x74)))))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    local_38 = *(undefined4 *)(param_1 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_34 = *(undefined4 *)(param_1 + 0x24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_30 = *(undefined4 *)(param_1 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_28 = *(double *)(param_3 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_20 = *(undefined8 *)(param_3 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_2c = *(undefined4 *)(param_1 + 0x2c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_18 = *(undefined8 *)(param_3 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_40 = *(undefined8 *)(param_1 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__0047d5a8(lVar1,&local_40); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


