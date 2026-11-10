/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0044E3E4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0054e3e4; name: FUN_.text__0054e3e4
 */


undefined8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__0054e3e4(long param_1,long *param_2,long *param_3,long param_4,undefined4 *param_5) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 auStack_260 [128]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(long *)(param_1 + 8) = param_4;
  uVar3 = *(undefined8 *)(param_4 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  uVar10 = *(undefined8 *)(param_4 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = *(undefined8 *)(param_4 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = *(undefined8 *)(param_4 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_4 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  *(undefined8 *)(param_1 + 0x40) = uVar10;
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  FUN__text__0054dee4(param_4,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long **)(param_1 + 0x18) = param_3;
  *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 100) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long **)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x78) = uVar5;
  uVar11 = param_5[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((*(char *)(param_1 + 0x48) == '\0') && ((uVar11 & 0x7000) == 0x7000)) { // [自动静态注释] 条件判断/分支
    uVar11 = uVar11 & 0xffffbf00 | uVar11 + ((int)(uVar11 << 0x11) >> 0x1f) & 0xff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (*(char *)(param_1 + 0x49) == '\0') { // [自动静态注释] 条件判断/分支
    uVar11 = uVar11 & 0xffff7f00 | uVar11 + ((int)(uVar11 << 0x10) >> 0x1f) & 0xff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  plVar1 = (long *)(param_1 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar7 = (long *)(**(code **)(*param_3 + 0x10))(param_3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = *(undefined4 *)(param_1 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*plVar1 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*param_2 + 0x18))(param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *plVar1 = 0;
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 0x88) = 0;
  if ((uVar11 & 0xff) != 0) { // [自动静态注释] 条件判断/分支
    uVar13 = (ulong)uVar11 & 0xff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar8 = (**(code **)(*param_2 + 0x10))(param_2,uVar13 << 5,0x7147ff,0x43); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *plVar1 = lVar8;
    if (lVar8 == 0) { // [自动静态注释] 条件判断/分支
      return 0x34; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    *(uint *)(param_1 + 0x88) = uVar11 & 0xff;
    lVar8 = (long)auStack_260 + (0x200 - ((ulong)((int)uVar13 * 4 + 0xf) & 0x7f0)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__0054db20(plVar7,(ulong)uVar11,param_1 + 0x34,lVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (*(int *)(param_1 + 0x88) != 0) { // [自动静态注释] 条件判断/分支
      lVar12 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar13 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        lVar9 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (*plVar1 != 0) { // [自动静态注释] 条件判断/分支
          puVar2 = (undefined8 *)(*plVar1 + lVar12); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar2[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar2[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *puVar2 = 0;
          puVar2[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          lVar9 = *plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        uVar14 = *(undefined4 *)(lVar8 + uVar13 * 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        iVar6 = (**(code **)(*plVar7 + 0xe0))(plVar7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        FUN__text__0054f36c(uVar14,lVar9 + lVar12,uVar5,param_1 + 0x24,(long)iVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
        uVar13 = uVar13 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar12 = lVar12 + 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (uVar13 < *(uint *)(param_1 + 0x88)); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


