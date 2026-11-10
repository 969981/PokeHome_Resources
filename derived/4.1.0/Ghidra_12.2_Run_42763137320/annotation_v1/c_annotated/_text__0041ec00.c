/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0031EC00
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 内存顺序控制, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0041ec00; name: FUN_.text__0041ec00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0041ec00(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float *pfVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  bVar4 = *(byte *)(param_1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar9 = (uint)*(ushort *)(param_1 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = *_DAT_008a4b70; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(ushort *)(param_1 + 2) < uVar3) { // [自动静态注释] 条件判断/分支
    uVar9 = uVar3 & 0xffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(short *)(param_1 + 2) = (short)uVar3;
  } // [自动静态注释] 作用域/控制流边界
  pfVar7 = _DAT_008a46b8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((bVar4 < 0x25) && (uVar3 == uVar9)) { // [自动静态注释] 条件判断/分支
    plVar1 = &DAT_00aea318 + (bVar4 - 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar8 = (long *)*plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (plVar8 != (long *)0x0) { // [自动静态注释] 条件判断/分支
      lVar11 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        plVar2 = plVar8 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          if ((int)*plVar2 != 0) { // [自动静态注释] 条件判断/分支
            ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            if (lVar11 == 0) { // [自动静态注释] 条件判断/分支
              lVar11 = nn::os::GetSystemTick(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              lVar11 = lVar11 + (long)(*pfVar7 * 0.01); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              lVar10 = nn::os::GetSystemTick(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              if (lVar11 <= lVar10) goto LAB__text__0041ed28; // [自动静态注释] 条件判断/分支
            } // [自动静态注释] 作用域/控制流边界
            else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              lVar10 = nn::os::GetSystemTick(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              if (lVar11 <= lVar10) { // [自动静态注释] 条件判断/分支
LAB__text__0041ed28: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                FUN__text__00405bf0(); // [自动静态注释] 调用尚未恢复正式名称的函数
                goto LAB__text__0041ec98; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              } // [自动静态注释] 作用域/控制流边界
            } // [自动静态注释] 作用域/控制流边界
            Yield(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            goto LAB__text__0041ec98; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          } // [自动静态注释] 作用域/控制流边界
          cVar5 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar6) { // [自动静态注释] 条件判断/分支
            *(int *)plVar2 = 1;
            cVar5 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
        } while (cVar5 != '\0'); // [自动静态注释] 循环/迭代
        lVar10 = *plVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        while ((long *)*plVar1 == plVar8) { // [自动静态注释] 循环/迭代
          cVar5 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
          if (bVar6) { // [自动静态注释] 条件判断/分支
            *plVar1 = lVar10;
            cVar5 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
          } // [自动静态注释] 作用域/控制流边界
          if (cVar5 == '\0') goto LAB__text__0041ed5c; // [自动静态注释] 条件判断/分支
        } // [自动静态注释] 作用域/控制流边界
        ClearExclusiveLocal(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(int *)plVar2 = 0;
LAB__text__0041ec98: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        plVar8 = (long *)*plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (plVar8 != (long *)0x0); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  plVar8 = (long *)FUN__text__00400f90(5,(uint)bVar4 * (uint)*(ushort *)(param_1 + 2) * 4 + 0x20, // [自动静态注释] 调用尚未恢复正式名称的函数
                                       0x10); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (plVar8 == (long *)0x0) { // [自动静态注释] 条件判断/分支
    return 0x34; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(plVar8 + 1) = 1;
LAB__text__0041ed5c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined4 *)((long)plVar8 + 0xc) = 0;
  *param_1 = (long)(plVar8 + 4);
  *(undefined2 *)((long)param_1 + 0x12) = 0;
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


