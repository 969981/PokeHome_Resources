/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00344230
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00444230; name: FUN_.text__00444230
 */


undefined8 FUN__text__00444230(long param_1,long param_2,undefined8 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long *)(param_1 + 0xa0) != 0 && *(long *)(param_1 + 0xa0) != *(long *)(param_2 + 0x18)) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 0xc0) = 3;
    FUN__text__00444150(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    while (uVar3 = *(uint *)(param_1 + 0x88), uVar3 != 0) { // [自动静态注释] 循环/迭代
      lVar6 = *(long *)(*(long *)(param_1 + 0x80) + (ulong)uVar3 * 8 + -8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(uint *)(param_1 + 0x88) = uVar3 - 1;
      piVar1 = (int *)(lVar6 + 0x24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        iVar2 = *piVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        cVar4 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
        if (bVar5) { // [自动静态注释] 条件判断/分支
          *piVar1 = iVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
        } // [自动静态注释] 作用域/控制流边界
      } while (cVar4 != '\0'); // [自动静态注释] 循环/迭代
      if (iVar2 + -1 == 0) { // [自动静态注释] 条件判断/分支
        (**(code **)(*(long *)(lVar6 + 0x10) + 0x20))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    *(undefined4 *)(param_1 + 0x88) = 0;
    if (*(long *)(param_1 + 0xa0) != 0) { // [自动静态注释] 条件判断/分支
      *(undefined8 *)(param_1 + 0xa0) = 0;
      FUN__text__00445c54(); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 *)(param_1 + 0xa8) = 0;
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 1;
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0x28);
  FUN__text__00444304(param_1,param_2,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


