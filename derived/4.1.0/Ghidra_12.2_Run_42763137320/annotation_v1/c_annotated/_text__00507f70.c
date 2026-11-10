/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00407F70
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00507f70; name: FUN_.text__00507f70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00507f70(undefined8 param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__00411bc0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar10 = *(long *)(param_2 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  for (lVar9 = *(long *)(_DAT_008a3f68 + 0x10); lVar9 != 0; lVar9 = *(long *)(lVar9 + 0x10)) { // [自动静态注释] 循环/迭代
    FUN__text__005082c0(lVar9 + 0x20,lVar9); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  puVar8 = &DAT_00aea8f8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (puVar8 = *(undefined4 **)(puVar8 + 4), puVar8 != (undefined4 *)0x0) { // [自动静态注释] 循环/迭代
    *(undefined2 *)(puVar8 + 0x31) = 0;
    *(undefined1 *)((long)puVar8 + 199) = 0;
    puVar8[0x2f] = puVar8[0x2f] + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((puVar8[0x30] != 0) && (uVar1 = puVar8[0x30] + 1, puVar8[0x30] = uVar1, 99 < uVar1)) { // [自动静态注释] 条件判断/分支
      puVar8[0x30] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar8[0x2e] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if ((*(int *)(lVar10 + 0xb0) != 0) && // [自动静态注释] 条件判断/分支
     (plVar7 = (long *)FUN__text__00400f80(1,0x38), plVar7 != (long *)0x0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__004b9a14(plVar7,0x4000); // [自动静态注释] 调用尚未恢复正式名称的函数
    *plVar7 = _DAT_008a41c0 + 0x10;
    lVar9 = FUN__text__00400f80(0,0x48); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (lVar9 != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__004b7a40(lVar9,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(long **)(lVar9 + 8) = plVar7;
      FUN__text__004b2960(*_DAT_008a45c0,lVar9,_DAT_008ab03c,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    piVar2 = (int *)((long)plVar7 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      iVar3 = *piVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      cVar5 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
      if (bVar6) { // [自动静态注释] 条件判断/分支
        *piVar2 = iVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
      } // [自动静态注释] 作用域/控制流边界
    } while (cVar5 != '\0'); // [自动静态注释] 循环/迭代
    if (iVar3 + -1 == 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*plVar7 + 0x20))(plVar7); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  *(undefined1 *)(lVar10 + 0xc4) = 0;
  lVar9 = DAT_00aea928; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (lVar9 != 0) { // [自动静态注释] 循环/迭代
    lVar4 = *(long *)(lVar9 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar9 = *(long *)(lVar9 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(uint *)(lVar4 + 0x60) < 2 && *(char *)(lVar4 + 100) != '\0') { // [自动静态注释] 条件判断/分支
      FUN__text__00447940(DAT_00ae9a50,*(undefined8 *)(lVar4 + 0x58)); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  lVar9 = nn::os::GetSystemTick(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(float *)(lVar10 + 0xc0) = (float)(lVar9 - *(long *)(param_2 + 0x10)) / DAT_00ae9648;
  FUN__text__00413d04(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00411bf0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


