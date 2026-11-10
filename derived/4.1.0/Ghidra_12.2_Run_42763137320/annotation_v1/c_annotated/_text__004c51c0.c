/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003C51C0
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c51c0; name: FUN_.text__004c51c0
 */


undefined8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__004c51c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                   undefined8 param_5,undefined4 param_6,undefined4 param_7) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  for (lVar5 = *(long *)(param_1 + 0x18); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x18)) { // [自动静态注释] 循环/迭代
    if ((*(short *)(lVar5 + 0x34) == 0x403) && // [自动静态注释] 条件判断/分支
       (plVar4 = (long *)FUN__text__004ba560(lVar5), plVar4 != (long *)0x0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
      piVar6 = (int *)((long)plVar4 + 0x24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (**(code **)(*plVar4 + 0x78))(plVar4,param_2,param_3,param_4,1,param_5,param_6,param_7); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      do { // [自动静态注释] 循环/迭代
        iVar1 = *piVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        cVar2 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
        if (bVar3) { // [自动静态注释] 条件判断/分支
          *piVar6 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
        } // [自动静态注释] 作用域/控制流边界
      } while (cVar2 != '\0'); // [自动静态注释] 循环/迭代
      if (iVar1 + -1 == 0) { // [自动静态注释] 条件判断/分支
        (**(code **)(plVar4[2] + 0x20))(plVar4 + 2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


