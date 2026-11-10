/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00336AA0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00436aa0; name: FUN_.text__00436aa0
 */


void FUN__text__00436aa0(undefined8 *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (0 < (int)*(uint *)(param_1 + 5)) { // [自动静态注释] 条件判断/分支
    uVar3 = (ulong)*(uint *)(param_1 + 5) + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      FUN__text__00438520(param_1[4] + (ulong)((int)uVar3 - 2) * 0x20); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar3 = uVar3 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (1 < uVar3); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  if (param_1[4] != 0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 5) = 0;
    FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
    param_1[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)((long)param_1 + 0x2c) = 0;
  } // [自动静态注释] 作用域/控制流边界
  plVar4 = (long *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  plVar1 = plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(int *)(param_1 + 1) == 0) { // [自动静态注释] 条件判断/分支
    if (plVar4 == (long *)0x0) goto LAB__text__00436ba0; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    do { // [自动静态注释] 循环/迭代
      plVar5 = plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar6 = *plVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (lVar6 != 0) { // [自动静态注释] 条件判断/分支
        FUN__text__004360b8(lVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
        FUN__text__00400fc0(0x10,lVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
        *plVar5 = 0;
      } // [自动静态注释] 作用域/控制流边界
      *(undefined4 *)(plVar5 + 2) = 0;
      *(byte *)(plVar5 + 3) = *(byte *)(plVar5 + 3) & 0xfe | 3 < *(byte *)(plVar5 + 3);
      plVar4 = (long *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar1 = plVar5 + 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (plVar5 + 5 != plVar4 + (ulong)*(uint *)(param_1 + 1) * 5); // [自动静态注释] 循环/迭代
    if (plVar4 == (long *)0x0) { // [自动静态注释] 条件判断/分支
LAB__text__00436ba0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(undefined2 *)(param_1 + 2) = 0xffff;
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if (*(uint *)(param_1 + 1) != 0) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        FUN__text__004365a4(plVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
        bVar2 = plVar5 != plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar4 = plVar4 + 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (bVar2); // [自动静态注释] 循环/迭代
      plVar4 = (long *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 1) = 0;
  FUN__text__00400fc0(0,plVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 2) = 0xffff;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


