/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00332E60
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00432e60; name: FUN_.text__00432e60
 */


void FUN__text__00432e60(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float *pfVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(uint *)(param_1 + 1) != 0) { // [自动静态注释] 条件判断/分支
    lVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pfVar4 = (float *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      pfVar4[1] = *(float *)(*param_1 + lVar2 + 0x10) - *(float *)(*param_1 + lVar2 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *pfVar4 = 1.0 / (((float *)(*param_1 + lVar2))[3] - *(float *)(*param_1 + lVar2));
      uVar1 = *(int *)(*param_1 + lVar2 + 8) - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar1 < 9) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x00432f18 */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK__text__00432ea4 + (ulong)*(byte *)((ulong)uVar1 + 0x73b164) * 4)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  (0x3f800000,0xbf000000,0x3f000000); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      uVar3 = uVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar2 = lVar2 + 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pfVar4 = pfVar4 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar3 < *(uint *)(param_1 + 1)); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


