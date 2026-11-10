/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004AA624
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005aa624; name: FUN_.text__005aa624
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005aa624(long param_1,undefined8 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar16; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__005a0018(*(undefined8 *)(param_1 + 0x160)); // [自动静态注释] 调用尚未恢复正式名称的函数
  piVar3 = _DAT_008a0300; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar14 = *(long *)(param_1 + 0x160); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar2 = *_DAT_008a0300; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(int *)(lVar14 + 0x100) == 0) { // [自动静态注释] 条件判断/分支
    lVar15 = *(long *)(lVar14 + 0x58) + (long)iVar2 * 0x168; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__006ec8e0(lVar15); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__005ae600(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (*(int *)(lVar15 + 0x160) != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__006eddd4(lVar15); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined4 *)(lVar15 + 0x160) = 0;
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__006ec93c(lVar15); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    pcVar12 = *(code **)(lVar14 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(int *)(lVar14 + 0x104) = iVar2;
    if (pcVar12 != (code *)0x0) { // [自动静态注释] 条件判断/分支
      *(undefined8 *)(lVar14 + 0x90) = 0;
      *(undefined8 *)(lVar14 + 0x98) = 0;
      *(undefined8 *)(lVar14 + 0x80) = 0;
      *(undefined8 *)(lVar14 + 0x88) = 0;
      (*pcVar12)(lVar14 + 0xa0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      iVar2 = *(int *)(lVar14 + 0x104); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(long *)(lVar14 + 0xa0) = param_1;
    *(code **)(lVar14 + 0x80) = FUN__text__005b1e44;
    *(undefined **)(lVar14 + 0x88) = &DAT__text__005b1e4c;
    lVar15 = *(long *)(lVar14 + 0x58) + (long)iVar2 * 0x168; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined1 **)(lVar14 + 0x90) = &LAB__text__005b1e50;
    *(undefined1 **)(lVar14 + 0x98) = &LAB__text__005b1e5c;
    FUN__text__006ec8e0(lVar15); // [自动静态注释] 调用尚未恢复正式名称的函数
    (**(code **)(lVar14 + 0x80))((long *)(lVar14 + 0xa0)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (*(int *)(lVar15 + 0x160) != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__006eddd4(lVar15); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined4 *)(lVar15 + 0x160) = 0;
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__006ec93c(lVar15); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__005b5520(*_DAT_0089f418,lVar14); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(undefined1 *)(lVar14 + 0x109) = 1;
  FUN__text__006f2bd4(param_1 + 0x21e0, // [自动静态注释] 调用尚未恢复正式名称的函数
                      *(long *)(*(long *)(param_1 + 0x160) + 0x58) + (long)*piVar3 * 0x168,
                      param_1 + (long)*piVar3 * 0x58 + 0x4208); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar15 = *(long *)(*(long *)(param_1 + 0x168) + 0xd0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  nn::os::GetSystemTick(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar14 = nn::os::ConvertToTimeSpan(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  piVar3 = _DAT_008a0300; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(char *)(param_1 + 0x85a8) == '\0') { // [自动静态注释] 条件判断/分支
    *(undefined1 *)(param_1 + 0x85a8) = 1;
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__006f5690(param_1 + (long)*_DAT_008a0300 * -0x58 + 0x4260,1000000000); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  nn::os::GetSystemTick(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar4 = nn::os::ConvertToTimeSpan(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar2 = *piVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar16 = *(long *)(param_1 + 0x1d8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(int *)(lVar16 + 0x138) = (int)(1 - (long)iVar2);
  puVar13 = _DAT_0089f418; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005b52c0(*_DAT_0089f418,lVar16); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar16 = lVar16 + (1 - (long)iVar2) * 0x70 + 0x58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar5 = thunk_FUN__text__006ec5f4(lVar16); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar6 = FUN__text__006ec680(); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar7 = FUN__text__006ec680(lVar5 + 0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar6 = FUN__text__006ec690(uVar6,uVar7); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 *)(param_1 + 0x1d0) = uVar6;
  thunk_FUN__text__006ec608(lVar16); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005aa320(DAT_00b11098); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005aa480(DAT_008e1498); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005b5bb0(*puVar13); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar16 = **(long **)(param_1 + 0x120); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar8 = (long *)(*(code *)**(undefined8 **)(lVar16 + 0x58))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar9 = (long *)FUN__text__005ae4d4(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (plVar9 != plVar8) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      plVar8 = (long *)*plVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (plVar8 != plVar9 && plVar8 != (long *)0x0); // [自动静态注释] 循环/迭代
    if (plVar8 == (long *)0x0) goto LAB__text__005aa198; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  uVar11 = (ulong)~*(uint *)(lVar16 + 0x98) & 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar5 = lVar16 + uVar11 * 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(ulong *)(lVar16 + 0x98) = uVar11;
  *(undefined8 *)(lVar5 + 0x68) = *(undefined8 *)(lVar5 + 0x70);
LAB__text__005aa198: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  nn::os::GetSystemTick(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar16 = nn::os::ConvertToTimeSpan(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar16 = lVar16 - *(long *)(param_1 + 0x1a8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(param_1 + 0x1b0) = lVar16;
  *(long *)(param_1 + 0x1c0) = (lVar14 - (lVar15 + lVar4)) + lVar16;
  lVar14 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar10 = (uint)((double)*(long *)(lVar14 + 8) / 16666666.0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((int)uVar10 < 2) { // [自动静态注释] 条件判断/分支
    uVar10 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (4 < uVar10) { // [自动静态注释] 条件判断/分支
    uVar10 = 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (*(char *)(param_1 + 0x85a9) != '\0') { // [自动静态注释] 条件判断/分支
    uVar10 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  lVar14 = param_1 + 0x21e0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005b254c(*(undefined8 *)(param_1 + 0x168),lVar14,uVar10); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((double)*(long *)(param_1 + 0x1b0) / 1000000.0 < 4.0) { // [自动静态注释] 条件判断/分支
    FUN__text__006f2c40(lVar14); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  if ((*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x8588)) || // [自动静态注释] 条件判断/分支
     (*(int *)(param_1 + 0x859c) != *(int *)(param_1 + 0x8598))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__006f2c40(lVar14); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x8588)) { // [自动静态注释] 条件判断/分支
      *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x8588);
      puVar1 = *(undefined8 **)(*(long *)(param_1 + 0x8580) + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      for (puVar13 = *(undefined8 **)(*(long *)(param_1 + 0x8580) + 0x60); puVar13 != puVar1; // [自动静态注释] 循环/迭代
          puVar13 = puVar13 + 1) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        (**(code **)(*(long *)*puVar13 + 8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if (*(int *)(param_1 + 0x859c) != *(int *)(param_1 + 0x8598)) { // [自动静态注释] 条件判断/分支
    *(int *)(param_1 + 0x859c) = *(int *)(param_1 + 0x8598);
    puVar1 = *(undefined8 **)(*(long *)(param_1 + 0x8590) + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    for (puVar13 = *(undefined8 **)(*(long *)(param_1 + 0x8590) + 0x60); puVar13 != puVar1; // [自动静态注释] 循环/迭代
        puVar13 = puVar13 + 1) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (**(code **)(*(long *)*puVar13 + 8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 0x85a4) = *(undefined4 *)(param_1 + 0x85a0);
  nn::os::GetSystemTick(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar6 = nn::os::ConvertToTimeSpan(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x1a8) = uVar6;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


