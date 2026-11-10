/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0031B488
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0041b488; name: FUN_.text__0041b488
 */


void FUN__text__0041b488(float param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  bool bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  bVar1 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((*(char *)(param_2 + 0x6e) == '\0') && // [自动静态注释] 条件判断/分支
     (bVar1 = false, !NAN(*(float *)(param_2 + 0x68)) && !NAN(param_1))) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar1 = *(float *)(param_2 + 0x68) == param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (!bVar1) { // [自动静态注释] 条件判断/分支
    fVar4 = *(float *)(param_2 + 100); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar3 = exp2f(param_1 * 0.00083333335); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(float *)(param_2 + 0x68) = param_1;
    *(undefined1 *)(param_2 + 0x6e) = 0;
    fVar3 = fVar4 * 65536.0 * fVar3 + 0.5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = (uint)fVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar2 < 2) { // [自动静态注释] 条件判断/分支
      uVar2 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (2.1474836e+09 <= fVar3) { // [自动静态注释] 条件判断/分支
      uVar2 = 0x7fffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(uint *)(param_2 + 0x34) = uVar2;
    *(uint *)(param_2 + 0x38) = uVar2;
    *(undefined4 *)(param_2 + 0x3c) = 0x400;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


