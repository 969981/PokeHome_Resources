/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00351290
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00451290; name: FUN_.text__00451290
 */


void FUN__text__00451290(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar2 = *(long **)(param_1 + 0xe0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((plVar2 == (long *)0x0) || (plVar2[3] != param_2)) { // [自动静态注释] 条件判断/分支
    plVar2 = *(long **)(param_1 + 0xe8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((plVar2 == (long *)0x0) || (plVar2[3] != param_2)) { // [自动静态注释] 条件判断/分支
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    (**(code **)(*plVar2 + 0x60))(plVar2,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar3 = *(undefined8 **)(param_1 + 0xe8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar3 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
      (**(code **)*puVar3)(puVar3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__00400fc0(5,puVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 *)(param_1 + 0xe8) = 0;
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if ((*(byte *)(plVar2 + 4) & 1) != 0) { // [自动静态注释] 条件判断/分支
    iVar1 = (**(code **)(*plVar2 + 0x90))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (iVar1 == 1) { // [自动静态注释] 条件判断/分支
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if (*(long *)(param_1 + 0xe0) == 0) goto LAB__text__004512fc; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__004286a0(); // [自动静态注释] 调用尚未恢复正式名称的函数
LAB__text__004512fc: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined4 *)(param_1 + 0xf8) = 2;
  *(undefined4 *)(param_1 + 300) = 0x11;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


