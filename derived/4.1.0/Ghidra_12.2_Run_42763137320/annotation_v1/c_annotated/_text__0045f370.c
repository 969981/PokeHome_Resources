/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0035F370
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045f370; name: FUN_.text__0045f370
 */


undefined8 FUN__text__0045f370(long *param_1,long *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_22; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_21; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar4 = (long *)param_2[0x10]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar4 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    if (plVar4 == param_1) { // [自动静态注释] 条件判断/分支
      return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    (**(code **)(*plVar4 + 0x58))(plVar4,param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar5 = (**(code **)(*param_1 + 0x270))(param_1,param_2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((int)uVar5 != 1) { // [自动静态注释] 条件判断/分支
    return uVar5; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if ((*(byte *)((long)param_2 + 0xd4) >> 1 & 1) == 0) { // [自动静态注释] 条件判断/分支
    plVar4 = (long *)FUN__text__00462fa0(param_1 + 0x1b,(int)param_2[4],&uStack_21); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar4 = (long *)FUN__text__00462fa0(param_1 + 0x1f,(int)param_2[4],&uStack_22); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  if (plVar4 == (long *)0x0) { // [自动静态注释] 条件判断/分支
    return 0x34; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *plVar4 = (long)param_2;
  (**(code **)(*param_2 + 0x38))(param_2,param_1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  piVar1 = (int *)((long)param_1 + 0x24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    cVar2 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar3) { // [自动静态注释] 条件判断/分支
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar2 != '\0'); // [自动静态注释] 循环/迭代
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


