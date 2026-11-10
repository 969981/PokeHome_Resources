/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00314330
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00414330; name: FUN_.text__00414330
 */


long FUN__text__00414330(long param_1,uint param_2,int param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar5 = FUN__text__00405b00(*(undefined4 *)(param_1 + 0x28)); // [自动静态注释] 调用尚未恢复正式名称的函数
LAB__text__00414364: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  do { // [自动静态注释] 循环/迭代
    puVar1 = (uint *)(uVar5 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    while (uVar5 != 0) { // [自动静态注释] 循环/迭代
      uVar2 = *(int *)(uVar5 + 8) - param_2 & -param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (-1 < (int)uVar2) { // [自动静态注释] 条件判断/分支
        uVar6 = *(ulong *)(param_1 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(uint *)(uVar5 + 8) = uVar2;
        *(int *)(uVar5 + 0xc) = *(int *)(uVar5 + 0xc) + 1;
        return (uVar6 & uVar5) + (ulong)uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      if ((ulong)*(uint *)(param_1 + 0x2c) - 0x18 < (ulong)param_2) { // [自动静态注释] 条件判断/分支
        return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      do { // [自动静态注释] 循环/迭代
        uVar2 = *puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
        if (bVar4) { // [自动静态注释] 条件判断/分支
          *puVar1 = uVar2 | 0x80000000;
          cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
        } // [自动静态注释] 作用域/控制流边界
      } while (cVar3 != '\0'); // [自动静态注释] 循环/迭代
      if ((uVar2 & 0x7fffffff) != *(uint *)(uVar5 + 0xc)) { // [自动静态注释] 条件判断/分支
        FUN__text__00405b80(*(undefined4 *)(param_1 + 0x28),0); // [自动静态注释] 调用尚未恢复正式名称的函数
        uVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        goto LAB__text__00414364; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      *(undefined4 *)(uVar5 + 8) = *(undefined4 *)(param_1 + 0x30);
      *(undefined4 *)(uVar5 + 0xc) = 0;
      *(undefined4 *)(uVar5 + 0x10) = 0;
    } // [自动静态注释] 作用域/控制流边界
    uVar5 = FUN__text__00414440(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__00405b80(*(undefined4 *)(param_1 + 0x28),uVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (uVar5 == 0) { // [自动静态注释] 条件判断/分支
      return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } while( true ); // [自动静态注释] 循环/迭代
} // [自动静态注释] 作用域/控制流边界


