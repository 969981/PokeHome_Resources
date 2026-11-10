/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00312C50
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00412c50; name: FUN_.text__00412c50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00412c50(long *param_1,ulong *param_2,undefined4 param_3,undefined4 param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined8 param_5,undefined4 param_6,undefined4 param_7) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  char cVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar4 = FUN__text__00414330(&DAT_00ae9fb8,param_3,param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
  plVar3 = _DAT_008a4888; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (_DAT_008a4888 = plVar3, lVar4 == 0) { // [自动静态注释] 循环/迭代
    lVar4 = FUN__text__00414330(&DAT_00ae9fb8,param_3,param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__00405bf0(); // [自动静态注释] 调用尚未恢复正式名称的函数
    plVar3 = _DAT_008a4888; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  do { // [自动静态注释] 循环/迭代
    uVar7 = DAT_00ae9f50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar8 = (ulong)((int)DAT_00ae9f50 + 1) & 0xfff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    while (DAT_00ae9f50 == uVar7) { // [自动静态注释] 循环/迭代
      cVar1 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar2 = (bool)ExclusiveMonitorPass(0xae9f50,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
      if (bVar2) { // [自动静态注释] 条件判断/分支
        cVar1 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
        DAT_00ae9f50 = uVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      if (cVar1 == '\0') { // [自动静态注释] 条件判断/分支
        lVar5 = *plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar6 = (ulong *)(lVar5 + uVar8 * 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar7 = *puVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        while ((uVar7 & 0xfff) != 0) { // [自动静态注释] 循环/迭代
          FUN__text__00405bf0(); // [自动静态注释] 调用尚未恢复正式名称的函数
          lVar5 = *plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar6 = (ulong *)(lVar5 + uVar8 * 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar7 = *puVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        do { // [自动静态注释] 循环/迭代
          uVar7 = *puVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          cVar1 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar2 = (bool)ExclusiveMonitorPass(puVar6,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar2) { // [自动静态注释] 条件判断/分支
            *puVar6 = uVar7 + 1;
            cVar1 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
        } while (cVar1 != '\0'); // [自动静态注释] 循环/迭代
        lVar5 = lVar5 + uVar8 * 0x38; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(long *)(lVar5 + 8) = lVar4;
        *(undefined8 *)(lVar5 + 0x10) = param_5;
        *(undefined4 *)(lVar5 + 0x18) = param_6;
        *(undefined4 *)(lVar5 + 0x1c) = param_7;
        *(undefined8 *)(lVar5 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(lVar5 + 0x28) = 0;
        *(undefined4 *)(lVar5 + 0x30) = 0x80000000;
        *param_1 = lVar4;
        *param_2 = uVar7 + 1 & 0xfffffffffffff000 | uVar8;
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } while( true ); // [自动静态注释] 循环/迭代
} // [自动静态注释] 作用域/控制流边界


