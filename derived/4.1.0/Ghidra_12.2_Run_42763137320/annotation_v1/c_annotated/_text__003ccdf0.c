/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002CCDF0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ccdf0; name: FUN_.text__003ccdf0
 */


void FUN__text__003ccdf0(long *param_1,ulong param_2,uint param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  size_t sVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 extraout_x8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar16; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auVar17 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char acStack_90 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_88 [2]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *local_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar5 = (undefined8 *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_2 <= (ulong)(param_1[2] - (long)puVar5 >> 5)) { // [自动静态注释] 条件判断/分支
    puVar6 = puVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (param_2 != 0) { // [自动静态注释] 条件判断/分支
      uVar9 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar6 = puVar5 + param_2 * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar9 = uVar9 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar14 = *(long *)(uVar9 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        if (lVar14 == 0x10) goto LAB__text__003cd080; // [自动静态注释] 条件判断/分支
        *(long *)((uVar9 | 0x18) + lVar14 * 8) = param_1[3];
        *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
        *puVar5 = 0xcbf29ce484222645;
        puVar5[1] = 0x70f683; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar5[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar5[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar5 = puVar5 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar14 = *(long *)(uVar9 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(long *)(uVar9 + 0x98) = lVar14;
      } while (puVar5 != puVar6); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    param_1[1] = (long)puVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  lVar14 = (long)puVar5 - *param_1 >> 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar9 = lVar14 + param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar9 >> 0x3b != 0) { // [自动静态注释] 条件判断/分支
    auVar17 = FUN__text__003cb610(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    uStack_68 = 0x3cd08c; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pcVar16 = (char *)*auVar17._0_8_; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_70 = (undefined1 *)(local_88 + 0xb); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    sVar3 = strlen(pcVar16); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pcVar4 = acStack_90 + -(sVar3 + 0x10 & 0xfffffffffffffff0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_78 = pcVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pcVar16 = strcpy(pcVar4,pcVar16); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pcVar16 = strrchr(pcVar16,0x2e); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pcVar4 = strrchr(pcVar4,0x2f); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (pcVar4 < pcVar16) { // [自动静态注释] 条件判断/分支
      *pcVar16 = '\0';
    } // [自动静态注释] 作用域/控制流边界
    if (param_3 < 6) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x003cd120 */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK__text__003cd12c + (ulong)*(byte *)((ulong)param_3 + 0x73a8d9) * 4))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__003cd438(local_88,&local_78,auVar17._8_8_); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__005dd198(extraout_x8,local_88,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (local_88[0] != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(local_88[0] + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar7 = param_1[2] - *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar8 = (long)uVar7 >> 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar8 <= uVar9) { // [自动静态注释] 条件判断/分支
    uVar8 = uVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (0x7fffffffffffffdf < uVar7) { // [自动静态注释] 条件判断/分支
    uVar8 = 0x7ffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (uVar8 != 0) { // [自动静态注释] 条件判断/分支
    lVar2 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar8 << 5,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar2 != 0) goto LAB__text__003cce84; // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)param_1[3] + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__003cce84: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar9 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar6 = (undefined8 *)(lVar2 + lVar14 * 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar9 = uVar9 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = lVar2 + uVar8 * 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar14 = *(long *)(uVar9 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1 = puVar6 + param_2 * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar5 = puVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    if (lVar14 == 0x10) goto LAB__text__003cd080; // [自动静态注释] 条件判断/分支
    *(long *)((uVar9 | 0x18) + lVar14 * 8) = param_1[3];
    *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
    *puVar5 = 0xcbf29ce484222645;
    puVar5[1] = 0x70f683; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar5[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar5[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar5 = puVar5 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar14 = *(long *)(uVar9 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)(uVar9 + 0x98) = lVar14;
  } while (puVar5 != puVar1); // [自动静态注释] 循环/迭代
  lVar15 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar13 = param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar13 == lVar15) { // [自动静态注释] 条件判断/分支
    lVar14 = param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *param_1 = (long)puVar6;
    param_1[1] = (long)puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[2] = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar11 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      if (lVar14 == 0x10) { // [自动静态注释] 条件判断/分支
LAB__text__003cd080: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Subroutine does not return */
        FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      *(long *)((uVar9 | 0x18) + lVar14 * 8) = param_1[3];
      lVar14 = lVar13 + lVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar12 = lVar11 + -0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
      *(undefined8 *)((long)puVar6 + lVar11 + -0x20) = *(undefined8 *)(lVar14 + -0x20);
      *(undefined8 *)((long)puVar6 + lVar11 + -0x18) = *(undefined8 *)(lVar14 + -0x18);
      *(undefined8 *)((long)puVar6 + lVar11 + -0x10) = *(undefined8 *)(lVar14 + -0x10);
      uVar10 = *(undefined8 *)(lVar14 + -8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(lVar14 + -8) = 0;
      *(undefined8 *)((long)puVar6 + lVar11 + -8) = uVar10;
      lVar14 = *(long *)(uVar9 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(uVar9 + 0x98) = lVar14;
      lVar11 = lVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar13 + lVar12 != lVar15); // [自动静态注释] 循环/迭代
    lVar13 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar15 = param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar14 = param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *param_1 = (long)puVar6 + lVar12;
    param_1[1] = (long)puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[2] = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    for (; lVar15 != lVar13; lVar15 = lVar15 + -0x20) { // [自动静态注释] 循环/迭代
      if (*(long *)(lVar15 + -8) != 0) { // [自动静态注释] 条件判断/分支
        (**(code **)(*(long *)(*(long *)(lVar15 + -8) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(undefined8 *)(lVar15 + -8) = 0;
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if (lVar13 == 0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x003cd06c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar13,lVar14 - lVar13,8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


