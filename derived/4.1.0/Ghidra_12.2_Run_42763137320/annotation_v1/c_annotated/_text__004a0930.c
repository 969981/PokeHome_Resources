/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003A0930
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a0930; name: FUN_.text__004a0930
 */


ulong FUN__text__004a0930(undefined8 param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 local_18 [2]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_14 [4]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar6 = FUN__text__004a0a40(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar6 != 0) { // [自动静态注释] 条件判断/分支
    lVar6 = FUN__text__0049f650(param_1,*(undefined8 *)(param_2 + 0x10),local_18,auStack_14, // [自动静态注释] 调用尚未恢复正式名称的函数
                                lVar6 + 8,lVar6 + 0x10); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (lVar6 != 0) { // [自动静态注释] 条件判断/分支
      uVar3 = *(uint *)(param_2 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar3 < 0x20) { // [自动静态注释] 条件判断/分支
        *(uint *)(param_2 + 0x7c) = *(uint *)(param_2 + 0x7c) | (uint)(1L << ((ulong)uVar3 & 0x3f));
        *(undefined2 *)(param_2 + 0x38 + (ulong)uVar3 * 2 + 4) = local_18[0];
      } // [自动静态注释] 作用域/控制流边界
      *(uint *)(param_2 + 0x38) = uVar3 + 1;
      uVar7 = FUN__text__00446a1c(lVar6,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
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
        (**(code **)(*(long *)(lVar6 + 0x10) + 0x20))((long *)(lVar6 + 0x10)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      return uVar7 & 0xffffffff; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    plVar8 = *(long **)(*(long *)(param_2 + 0x88) + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__0049d9d0(*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x28 + -0x28); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(int *)(plVar8 + 1) = (int)plVar8[1] + -1;
  } // [自动静态注释] 作用域/控制流边界
  uVar7 = FUN__text__004953c0(param_1,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  return uVar7; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


