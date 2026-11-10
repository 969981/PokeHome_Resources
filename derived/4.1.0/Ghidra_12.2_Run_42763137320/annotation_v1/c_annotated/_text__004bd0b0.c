/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003BD0B0
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004bd0b0; name: FUN_.text__004bd0b0
 */


undefined8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__004bd0b0(long *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_70 [2]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_5c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_54; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar4 = (long *)FUN__text__004ba560(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (plVar4 == (long *)0x0) { // [自动静态注释] 条件判断/分支
    return 0xf; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  local_48 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_50 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_58 = *(byte *)((long)param_1 + 0x36) & 0x1f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_54 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_70[0] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_68 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_60 = param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_5c = FUN__text__004ba030(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  (**(code **)(*param_1 + 0x70))(param_1,local_70); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  piVar5 = (int *)((long)plVar4 + 0x24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (**(code **)(*plVar4 + 0x90))(plVar4,local_70); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    iVar1 = *piVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    cVar2 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar3) { // [自动静态注释] 条件判断/分支
      *piVar5 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar2 != '\0'); // [自动静态注释] 循环/迭代
  if (iVar1 + -1 == 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(plVar4[2] + 0x20))(plVar4 + 2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


