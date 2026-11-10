/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00398EC0
 * 用途/行为：用途尚未确认；代码可观察到：同步/原子操作, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00498ec0; name: FUN_.text__00498ec0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00498ec0(long param_1,long param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_b0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_a8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_a0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_98; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_90; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_88; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint local_84; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_80; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(long *)(param_1 + 8) = param_2;
  piVar11 = (int *)(param_2 + 0x24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    cVar3 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
    if (bVar4) { // [自动静态注释] 条件判断/分支
      *piVar11 = *piVar11 + 1;
      cVar3 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
    } // [自动静态注释] 作用域/控制流边界
  } while (cVar3 != '\0'); // [自动静态注释] 循环/迭代
  bVar2 = *(byte *)(param_3 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar10 = (uint)bVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = bVar2 - 0x80; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar5 < 0x21 && (1L << ((ulong)uVar5 & 0x3f) & 0x100010001U) != 0) { // [自动静态注释] 条件判断/分支
    uVar7 = *(undefined4 *)(param_3 + 0x34); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar9 = *(undefined1 *)(param_3 + 0x9c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar8 = *(long *)(param_3 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar7 = *(undefined4 *)(param_3 + 0x34); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar9 = 0xff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar8 = *(long *)(param_3 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (bVar2 == 0) goto LAB__text__00498f50; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  uVar10 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(param_3 + 8) != 0) { // [自动静态注释] 条件判断/分支
    uVar10 = *(uint *)(*(long *)(param_3 + 8) + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
LAB__text__00498f50: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_3 + 0x99);
  *(long *)(param_1 + 0x10) = lVar8;
  *(undefined4 *)(param_1 + 0x18) = uVar7;
  *(uint *)(param_1 + 0x20) = uVar10;
  *(undefined1 *)(param_1 + 0x30) = uVar9;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x29) = (undefined4)local_b0;
  *(undefined4 *)(param_1 + 0x2c) = local_b0._3_4_;
  *(undefined4 *)(param_1 + 0x31) = (undefined4)local_78;
  *(undefined4 *)(param_1 + 0x34) = local_78._3_4_;
  iVar1 = *(int *)(lVar8 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(int *)(lVar8 + 0x60) = iVar1 + 1;
  if ((iVar1 == 1) && (*(char *)(lVar8 + 100) != '\0')) { // [自动静态注释] 条件判断/分支
    FUN__text__004473d0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_3 + 0x34);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_3 + 0x28);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_3 + 0x30);
  piVar11 = *(int **)(param_3 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(param_1 + 0x40) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__0040c060(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  if (piVar11 != (int *)0x0) { // [自动静态注释] 条件判断/分支
    *piVar11 = *piVar11 + 1;
  } // [自动静态注释] 作用域/控制流边界
  *(int **)(param_1 + 0x40) = piVar11;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_3 + 0x80);
  local_78 = *(long *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(char *)(local_78 + 0x130) != '\0') { // [自动静态注释] 条件判断/分支
    FUN__text__0048e100(DAT_00ae9a80,*(undefined4 *)(param_1 + 0x54)); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_78 = *(long *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  puVar6 = _DAT_008a4640; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(int *)(local_78 + 0x120) != 0) { // [自动静态注释] 条件判断/分支
    plVar12 = *(long **)(local_78 + 0x118); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      local_a8 = *(undefined8 *)(param_3 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_68 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_a0 = *(undefined4 *)(param_3 + 0xa0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_90 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_88 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_84 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_70 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*plVar12 != 0) { // [自动静态注释] 条件判断/分支
        local_70 = *plVar12 + 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      local_80 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_b0 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_98 = *(undefined8 *)(param_3 + 0xa8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar7 = FUN__text__00477138(param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
      local_80 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_b0 = *(undefined8 *)(param_3 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_90 = CONCAT44(*(undefined4 *)(param_3 + 0x34),uVar7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_88 = *(undefined4 *)(param_3 + 0x84); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_84 = *(byte *)(param_3 + 0x310) >> 1 & 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__0046cff0(*puVar6,&local_78,*plVar12 + 0x20,&local_b0,param_1 + 0x60); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar8 = *plVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(char *)(lVar8 + 0x4c) == '\x04') { // [自动静态注释] 条件判断/分支
        FUN__text__0046d170(*puVar6,&local_78,*(undefined4 *)(lVar8 + 0x48),&local_b0,param_1 + 0x60 // [自动静态注释] 调用尚未恢复正式名称的函数
                           ); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        lVar8 = *plVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      FUN__text__00499170(param_1,lVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
      local_78 = *(long *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar12 = plVar12 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (plVar12 != // [自动静态注释] 循环/迭代
             (long *)(*(long *)(local_78 + 0x118) + (ulong)*(uint *)(local_78 + 0x120) * 8)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


