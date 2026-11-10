/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003617AC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004617ac; name: FUN_.text__004617ac
 */


undefined8 FUN__text__004617ac(long param_1,int param_2,byte param_3,int param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  piVar1 = *(int **)(param_1 + 0xf0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_2 == 0) { // [自动静态注释] 条件判断/分支
    if (piVar1 == (int *)0x0) { // [自动静态注释] 条件判断/分支
      return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else if (piVar1 == (int *)0x0) { // [自动静态注释] 条件判断/分支
    uVar3 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    piVar1 = (int *)FUN__text__00400f80(2,0xc); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (piVar1 == (int *)0x0) goto LAB__text__004618a0; // [自动静态注释] 条件判断/分支
    *(undefined2 *)(piVar1 + 2) = 0;
    piVar1[0] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    piVar1[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined1 *)((long)piVar1 + 9) = 1;
    *(int **)(param_1 + 0xf0) = piVar1;
  } // [自动静态注释] 作用域/控制流边界
  if (*piVar1 <= param_4) { // [自动静态注释] 条件判断/分支
    *piVar1 = param_4;
    lVar2 = *(long *)(param_1 + 0xf0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar2 == 0) { // [自动静态注释] 条件判断/分支
      return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if ((*(byte *)(lVar2 + 9) != (param_3 & 1)) || (*(int *)(lVar2 + 4) != param_2)) { // [自动静态注释] 条件判断/分支
      *(byte *)(lVar2 + 9) = param_3 & 1;
      *(int *)(*(long *)(param_1 + 0xf0) + 4) = param_2;
      FUN__text__0046469c(param_1,0,0,0,4); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar2 = *(long *)(param_1 + 0xf0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    uVar3 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((param_2 == 0) && (lVar2 != 0)) { // [自动静态注释] 条件判断/分支
      FUN__text__00400fc0(2); // [自动静态注释] 调用尚未恢复正式名称的函数
LAB__text__004618a0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(undefined8 *)(param_1 + 0xf0) = 0;
      return uVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


