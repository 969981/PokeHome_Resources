/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003137F0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004137f0; name: FUN_.text__004137f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004137f0(void) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  EventType *pEVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  piVar5 = _DAT_008a48c0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  piVar3 = _DAT_008a48a0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while ((0 < *piVar3 || (0 < *piVar5))) { // [自动静态注释] 循环/迭代
    FUN__text__00405bf0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  while ((0 < piVar3[1] || (0 < piVar5[1]))) { // [自动静态注释] 循环/迭代
    FUN__text__00405bf0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  while ((0 < piVar3[2] || (0 < piVar5[2]))) { // [自动静态注释] 循环/迭代
    FUN__text__00405bf0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  while ((pEVar4 = _DAT_008a48b0, 0 < piVar3[3] || (0 < piVar5[3]))) { // [自动静态注释] 循环/迭代
    FUN__text__00405bf0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  if (_DAT_008a48b0[0x13] == (EventType)0x1) { // [自动静态注释] 条件判断/分支
    nn::os::FinalizeEvent(_DAT_008a48b0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(pEVar4 + 0x18) = 0;
  *(undefined8 *)(pEVar4 + 0x20) = 0;
  *(undefined8 *)pEVar4 = 0;
  *(undefined8 *)(pEVar4 + 8) = 0;
  *(undefined8 *)(pEVar4 + 0x10) = 0;
  FUN__text__00412230(); // [自动静态注释] 调用尚未恢复正式名称的函数
  puVar2 = _DAT_008a4888; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00400fc0(0x10,*_DAT_008a4888); // [自动静态注释] 调用尚未恢复正式名称的函数
  puVar1 = _DAT_008a4880; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *puVar2 = 0;
  *puVar1 = 0;
  puVar1[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00414230(_DAT_008a48c8); // [自动静态注释] 调用尚未恢复正式名称的函数
  *_DAT_008a48d8 = 0;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


