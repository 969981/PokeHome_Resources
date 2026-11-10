/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00150B3C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00250b3c; name: FUN_.text__00250b3c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00250b3c(long param_1,ulong param_2,undefined8 param_3,uint param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar2 = *(long *)(_DAT_008a1cb0 + (ulong)param_4 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar2 == -0x340d631b7bddd9bb || lVar2 == 0) { // [自动静态注释] 条件判断/分支
    iVar1 = *(int *)(param_1 + (param_2 & 0xffffffff) * 4 + 0x648); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    local_18 = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),&local_18); // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar1 = *(int *)(param_1 + (param_2 & 0xffffffff) * 4 + 0x648); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (iVar1 - 1U < 10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not recover jumptable at 0x00250be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__00250be4 + (ulong)*(byte *)((ulong)(iVar1 - 1U) + 0x72be45) * 4))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


