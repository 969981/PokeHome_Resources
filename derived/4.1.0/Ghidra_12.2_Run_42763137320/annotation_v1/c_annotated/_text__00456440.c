/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00356440
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00456440; name: FUN_.text__00456440
 */


void FUN__text__00456440(long param_1,ulong param_2,long param_3,undefined4 param_4,long param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                        long param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  byte bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar16; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar17; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar19; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 auStack_50 [4]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lStack_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_34; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((int)param_2 != 0) { // [自动静态注释] 条件判断/分支
    uVar12 = (param_2 >> 0x1d & 0x7fffffff8) + 0xf & 0xffffffff0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar4 = (long)auStack_50 + (0x10 - uVar12); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar9 = lVar4 - uVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar10 = lVar9 - uVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar6 = lVar10 - uVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar11 = lVar6 - uVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar5 = lVar11 - uVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar12 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar13 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_34 = param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      uVar7 = (ulong)*(ushort *)(param_1 + uVar12 * 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar16 = uVar7 * 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar14 = *(long **)(param_5 + lVar16); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar1 = *(byte *)(plVar14 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (bVar1 != 0) { // [自动静态注释] 条件判断/分支
        uVar15 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar8 = *(long **)(param_6 + uVar7 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar16 = *(long *)(*(long *)(param_3 + lVar16) + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          lVar17 = *plVar14; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          lVar19 = uVar15 * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          lVar3 = uVar13 * 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar2 = *(ushort *)(plVar14 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(long *)(lVar9 + lVar3) = lVar16;
          *(long *)(lVar10 + lVar3) = lVar16 + 0x14;
          uVar13 = (ulong)((int)uVar13 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          lVar18 = uVar15 * 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar15 = uVar15 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(ulong *)(lVar4 + lVar3) = lVar17 + lVar19 * (ulong)uVar2;
          *(long *)(lVar6 + lVar3) = *(long *)(lVar16 + 0x28) + lVar18;
          *(long *)(lVar11 + lVar3) = *(long *)(lVar16 + 0x30) + lVar18;
          *(ulong *)(lVar5 + lVar3) = *plVar8 + lVar19 * (ulong)*(ushort *)(plVar8 + 2);
        } while (uVar15 != bVar1); // [自动静态注释] 循环/迭代
      } // [自动静态注释] 作用域/控制流边界
      uVar12 = uVar12 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar12 != (param_2 & 0xffffffff)); // [自动静态注释] 循环/迭代
    *(int *)(lVar5 + -0x10) = (int)uVar13;
    FUN__text__0041f170(lVar4,lVar5,lVar9,lVar6,lVar10,lVar11,&local_34,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


