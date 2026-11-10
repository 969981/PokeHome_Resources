/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00564E8C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00664e8c; name: FUN_.text__00664e8c
 */


undefined8 FUN__text__00664e8c(long *param_1,undefined8 param_2,long param_3,undefined8 *param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar3 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_4 = 0;
  if (((*(char *)(lVar3 + 0xf44) < '\0') && ((*(ushort *)(lVar3 + 0x660) >> 3 & 1) == 0)) && // [自动静态注释] 条件判断/分支
     (iVar1 = FUN__text__0066748c(param_1,1,param_2,param_3), iVar1 != 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar2 = 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    while (param_3 != 0) { // [自动静态注释] 循环/迭代
      if (*(uint *)(param_1 + 7) < 8) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x00664f1c */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*(code *)(&UNK__text__00664f28 + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                          (ulong)*(byte *)((ulong)*(uint *)(param_1 + 7) + 0x7602b9) * 4))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    uVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


