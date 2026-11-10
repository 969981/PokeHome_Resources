/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002C4754
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c4754; name: FUN_.text__003c4754
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003c4754(long *param_1,ulong param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar4 = param_1[0x14]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((*_DAT_008a01f8 & 1) == 0) { // [自动静态注释] 条件判断/分支
    iVar2 = __cxa_guard_acquire(_DAT_008a01f8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar1 = _DAT_008a0200; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = param_2 & 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (iVar2 != 0) { // [自动静态注释] 条件判断/分支
      _DAT_008a0200[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar1 = 0xcbf29ce484222645;
      puVar1[1] = 0x70f683; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__001001d0(_DAT_008a0208,_DAT_008a0200,&__DT_FINI_ARRAY); // [自动静态注释] 调用尚未恢复正式名称的函数
      __cxa_guard_release(_DAT_008a01f8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar3 = param_2 & 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  *(int *)(lVar4 + 0x180) = (int)*_DAT_008a0200;
  if ((uVar3 & 1) == 0) { // [自动静态注释] 条件判断/分支
    *(undefined1 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0xf) = 7;
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 0xf) = 5;
                    /* WARNING: Could not recover jumptable at 0x003c47a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


