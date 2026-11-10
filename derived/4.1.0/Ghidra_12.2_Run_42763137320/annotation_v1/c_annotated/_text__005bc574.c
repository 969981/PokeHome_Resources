/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004BC574
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005bc574; name: FUN_.text__005bc574
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005bc574(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_60 [24]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar10 = *(undefined8 *)(param_1 + 0xe0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_78 = 0xf03ffb7387bef17d; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_70 = 0x71e9d6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_68 = 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005e927c(auStack_60,&local_78); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar6 = FUN__text__005a1ad0(uVar10,0,auStack_60); // [自动静态注释] 调用尚未恢复正式名称的函数
  piVar5 = _DAT_008a0300; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar4 = _DAT_0089f418; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar6 == 0) { // [自动静态注释] 条件判断/分支
    puVar7 = (undefined8 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    iVar3 = *_DAT_008a0300; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(int *)(lVar6 + 0x138) = iVar3;
    FUN__text__005b52c0(*puVar4,lVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar6 = lVar6 + (long)iVar3 * 0x70 + 0x58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar7 = (undefined8 *)thunk_FUN__text__006ec5f4(lVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  if (local_48 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if (puVar7 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    lVar8 = *(long *)(param_1 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar10 = *(undefined8 *)(lVar8 + 0xe0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = *(undefined8 *)(lVar8 + 0xe8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = *(undefined8 *)(lVar8 + 0xf8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar7[2] = *(undefined8 *)(lVar8 + 0xf0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar7[3] = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *puVar7 = uVar10;
    puVar7[1] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar10 = *(undefined8 *)(lVar8 + 0x100); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = *(undefined8 *)(lVar8 + 0x108); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = *(undefined8 *)(lVar8 + 0x118); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar7[6] = *(undefined8 *)(lVar8 + 0x110); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar7[7] = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar7[4] = uVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar7[5] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (lVar6 != 0) { // [自动静态注释] 条件判断/分支
    thunk_FUN__text__006ec608(lVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005a0018(*(undefined8 *)(param_1 + 0x60)); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar6 = *(long *)(param_1 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar3 = *piVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(int *)(lVar6 + 0x100) == 0) { // [自动静态注释] 条件判断/分支
    lVar8 = *(long *)(lVar6 + 0x58) + (long)iVar3 * 0x168; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__006ec8e0(lVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__005bcd24(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (*(int *)(lVar8 + 0x160) != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__006eddd4(lVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined4 *)(lVar8 + 0x160) = 0;
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__006ec93c(lVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    pcVar9 = *(code **)(lVar6 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(int *)(lVar6 + 0x104) = iVar3;
    if (pcVar9 != (code *)0x0) { // [自动静态注释] 条件判断/分支
      *(undefined8 *)(lVar6 + 0x90) = 0;
      *(undefined8 *)(lVar6 + 0x98) = 0;
      *(undefined8 *)(lVar6 + 0x80) = 0;
      *(undefined8 *)(lVar6 + 0x88) = 0;
      (*pcVar9)(lVar6 + 0xa0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      iVar3 = *(int *)(lVar6 + 0x104); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(long *)(lVar6 + 0xa0) = param_1;
    *(code **)(lVar6 + 0x80) = FUN__text__005bce88;
    *(undefined **)(lVar6 + 0x88) = &DAT__text__005bce90;
    lVar8 = *(long *)(lVar6 + 0x58) + (long)iVar3 * 0x168; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined1 **)(lVar6 + 0x90) = &LAB__text__005bce94;
    *(undefined1 **)(lVar6 + 0x98) = &LAB__text__005bcea0;
    FUN__text__006ec8e0(lVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
    (**(code **)(lVar6 + 0x80))((long *)(lVar6 + 0xa0)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (*(int *)(lVar8 + 0x160) != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__006eddd4(lVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined4 *)(lVar8 + 0x160) = 0;
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__006ec93c(lVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__005b5520(*puVar4,lVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(undefined1 *)(lVar6 + 0x109) = 1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


