/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003056E0
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004056e0; name: FUN_.text__004056e0
 */


void FUN__text__004056e0(int param_1,long *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar5 = (long *)param_2[8]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar6 = *plVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar6 != 0) { // [自动静态注释] 条件判断/分支
    lVar4 = FUN__text__00405b00(*(undefined4 *)(&DAT_00ae89c0 + (long)param_1 * 4)); // [自动静态注释] 调用尚未恢复正式名称的函数
    plVar5 = (long *)param_2[8]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((lVar6 != lVar4) && (*(int *)((long)plVar5 + 0xd1c) == 0)) { // [自动静态注释] 条件判断/分支
      plVar5 = plVar5 + 0x19c; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        lVar6 = *plVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *param_2 = lVar6;
        while (*plVar5 == lVar6) { // [自动静态注释] 循环/迭代
          cVar2 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar3) { // [自动静态注释] 条件判断/分支
            *plVar5 = (long)param_2;
            cVar2 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
          if (cVar2 == '\0') { // [自动静态注释] 条件判断/分支
            return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
        ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } while( true ); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  plVar5[0x19d] = plVar5[0x19d] + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar6 = param_2[9]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long **)(param_2[8] + 0x3110) == param_2) { // [自动静态注释] 条件判断/分支
    *(long *)(param_2[8] + 0x3110) = lVar6;
    uVar1 = *(uint *)((long)param_2 + 0x2c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar6 = param_2[8]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar4 = param_2[10]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)(lVar4 + 0x48) = lVar6;
    if (lVar6 != 0) { // [自动静态注释] 条件判断/分支
      *(long *)(lVar6 + 0x50) = lVar4;
    } // [自动静态注释] 作用域/控制流边界
    uVar1 = *(uint *)((long)param_2 + 0x2c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar6 = param_2[8]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if ((((uVar1 < 2) || (*(long *)(lVar6 + 0xbd8) != 0)) || (*(int *)(lVar6 + 0xd1c) != 0)) || // [自动静态注释] 条件判断/分支
     (*(int *)(lVar6 + 0xd00) != 0)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__00404260(param_1,lVar6,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(lVar6 + 0xcf0) = param_2;
  *(undefined4 *)(lVar6 + 0xd00) = *(undefined4 *)((long)param_2 + 0x2c);
  if ((*(byte *)(param_2 + 5) & 1) == 0) { // [自动静态注释] 条件判断/分支
    *(ulong *)(lVar6 + 0xcf8) =
         (long)param_2 - // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
         (&DAT_00ae8a40)[(long)param_1 * 199] * (ulong)*(uint *)((long)param_2 + 0x34); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(lVar6 + 0xcf8) = param_2;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


