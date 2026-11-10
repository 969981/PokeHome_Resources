/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004F4CC0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f4cc0; name: FUN_.text__005f4cc0
 */


long FUN__text__005f4cc0(long param_1,undefined4 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined2 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  short *psVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  short sVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar3 = FUN__text__005f3244(*(undefined8 *)(param_1 + 0x78)); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar4 = FUN__text__005f3720(uVar3,*(undefined4 *)(param_1 + 0xb0)); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar4 == 0) { // [自动静态注释] 条件判断/分支
    uVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    goto LAB__text__005f4de8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  psVar5 = (short *)(lVar4 + (long)*(int *)(param_1 + 0xac) * 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*psVar5 == 0x10) { // [自动静态注释] 条件判断/分支
    *(undefined1 *)(param_1 + 0xb9) = 1;
    uVar1 = FUN__text__005f37a0(psVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined2 *)(param_1 + 0xc0) = uVar1;
    uVar2 = FUN__text__005f37c0(psVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar9 = uVar2 & 0xffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((uVar2 & 0xfff0) != 0) { // [自动静态注释] 条件判断/分支
      uVar9 = 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(uint *)(param_1 + 0xc4) = uVar9;
    if (uVar9 != 0) { // [自动静态注释] 条件判断/分支
      uVar11 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        uVar1 = FUN__text__005f37f0(psVar5,uVar11 & 0xffffffff); // [自动静态注释] 调用尚未恢复正式名称的函数
        uVar9 = *(uint *)(param_1 + 0xc4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined2 *)(param_1 + 200 + uVar11 * 2) = uVar1;
        uVar11 = uVar11 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (uVar11 < uVar9); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    psVar5 = (short *)FUN__text__005f3780(psVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
LAB__text__005f4dd0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    sVar8 = *psVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar6 = (undefined4)((ulong)((long)psVar5 - lVar4) >> 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (sVar8 == 0) goto LAB__text__005f4de0; // [自动静态注释] 条件判断/分支
LAB__text__005f4d9c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (sVar8 != 10) { // [自动静态注释] 条件判断/分支
      uVar10 = uVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
      uVar10 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    bVar7 = sVar8 == 10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(param_1 + 0xac) = uVar10;
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined1 *)(param_1 + 0xb9) = 0;
    sVar8 = *psVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (sVar8 != 0 && sVar8 != 10) { // [自动静态注释] 条件判断/分支
      psVar5 = psVar5 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto LAB__text__005f4dd0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    uVar6 = (undefined4)((ulong)((long)psVar5 - lVar4) >> 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (sVar8 != 0) goto LAB__text__005f4d9c; // [自动静态注释] 条件判断/分支
LAB__text__005f4de0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    bVar7 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(bool *)(param_1 + 0xb8) = bVar7;
LAB__text__005f4de8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *param_2 = uVar6;
  return lVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


