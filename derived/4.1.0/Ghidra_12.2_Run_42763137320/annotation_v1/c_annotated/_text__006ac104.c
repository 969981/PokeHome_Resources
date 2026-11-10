/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005AC104
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ac104; name: FUN_.text__006ac104
 */


void FUN__text__006ac104(long param_1,long param_2,undefined8 *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar16; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar17; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar19; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar20; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar21; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar22; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar23; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xffc00000;
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xffc00000;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 8) = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x48) = 0xe0;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  bVar8 = *(byte *)(param_2 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(byte *)(param_1 + 0x48) = bVar8 & 0xf | 0xe0;
  *(byte *)(param_1 + 0x48) = *(byte *)(param_2 + 0x48) & 0xf0 | bVar8 & 0xf;
  *(undefined1 *)(param_1 + 0x49) = *(undefined1 *)(param_2 + 0x49);
  *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(param_2 + 0x4a);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  if (*(long *)(param_2 + 0x38) == 0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(param_1 + 0x38) = 0;
    bVar8 = *(byte *)(param_2 + 0x49); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar14 = (undefined8 *)FUN__text__006a0f04(0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 **)(param_1 + 0x38) = puVar14;
    uVar3 = (*(undefined8 **)(param_2 + 0x38))[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *puVar14 = **(undefined8 **)(param_2 + 0x38);
    puVar14[1] = uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(*(long *)(param_1 + 0x38) + 0xc) = 0;
    bVar8 = *(byte *)(param_2 + 0x49); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if ((bVar8 >> 5 & 1) == 0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar14 = (undefined8 *)FUN__text__006a0f04(0x20); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 **)(param_1 + 8) = puVar14;
    puVar15 = *(undefined8 **)(param_2 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = puVar15[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = puVar15[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar5 = puVar15[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *puVar14 = *puVar15;
    puVar14[1] = uVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar14[2] = uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar14[3] = uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xffc00000;
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xffc00000;
  uVar6 = *(uint *)(param_2 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006aa8dc(param_1,uVar6 & 3,uVar6 >> 2 & 3,uVar6 >> 4 & 3,uVar6 >> 6 & 7,uVar6 >> 9 & 1, // [自动静态注释] 调用尚未恢复正式名称的函数
                      uVar6 >> 10 & 3,uVar6 >> 0xc & 1,uVar6 >> 0xd & 3,(byte)(uVar6 >> 0xf) & 1, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                      (byte)(uVar6 >> 0x10) & 1,(byte)(uVar6 >> 0x11) & 1,uVar6 >> 0x12 & 3, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                      uVar6 >> 0x14 & 3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (*(void **)(param_1 + 0x18) != (void *)0x0) { // [自动静态注释] 条件判断/分支
    uVar6 = *(uint *)(param_1 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar7 = *(uint *)(param_2 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar19 = (ulong)uVar7 & 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar13 = (uint)uVar19; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(uint *)(param_1 + 0x14) = uVar6 & 0xfffffffc | uVar13;
    uVar16 = (ulong)*(uint *)(param_2 + 0x14) & 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar9 = (uint)uVar16; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(uint *)(param_1 + 0x14) = uVar6 & 0xfffffff0 | uVar13 | uVar9;
    uVar18 = (ulong)*(uint *)(param_2 + 0x14) & 0x30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar10 = (uint)uVar18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(uint *)(param_1 + 0x14) = uVar6 & 0xffffffc0 | uVar13 | uVar9 | uVar10;
    uVar17 = (ulong)*(uint *)(param_2 + 0x14) & 0x1c0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar11 = (uint)uVar17; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(uint *)(param_1 + 0x14) = uVar6 & 0xfffffe00 | uVar13 | uVar9 | uVar10 | uVar11;
    uVar20 = (ulong)*(uint *)(param_2 + 0x14) & 0x6000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar12 = (uint)uVar20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(uint *)(param_1 + 0x14) = uVar6 & 0xffff9e00 | uVar13 | uVar9 | uVar10 | uVar11 | uVar12;
    uVar21 = (ulong)*(uint *)(param_2 + 0x14) & 0x8000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(uint *)(param_1 + 0x14) =
         uVar6 & 0xffff1e00 | uVar13 | uVar9 | uVar10 | uVar11 | uVar12 | (uint)uVar21; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar22 = (ulong)*(uint *)(param_2 + 0x14) & 0xc0000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(uint *)(param_1 + 0x14) =
         uVar6 & 0xfff31e00 | uVar13 | uVar9 | uVar10 | uVar11 | uVar12 | (uint)uVar21 | // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
         (uint)uVar22; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar23 = (ulong)*(uint *)(param_2 + 0x14) & 0x300000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar19 = (ulong)uVar6 & 0xffc31e00 | uVar19 | uVar16 | uVar18 | uVar17 | uVar20 | uVar21 | // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
             uVar22 | uVar23; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(int *)(param_1 + 0x14) = (int)uVar19;
    lVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((uVar6 & 0x1000) != 0) { // [自动静态注释] 条件判断/分支
      lVar1 = 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    lVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((uVar6 & 0x20000) != 0) { // [自动静态注释] 条件判断/分支
      lVar2 = 0x74; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    memcpy(*(void **)(param_1 + 0x18),*(void **)(param_2 + 0x18), // [自动静态注释] 内存复制、清零或移动
           lVar2 + lVar1 + uVar18 + ((ulong)uVar7 & 3) * 0x10 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
           (((ulong)(uVar6 >> 10) & 3) + (uVar17 >> 6)) * 4 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
           (ulong)((int)(uVar17 >> 2) + 0x1cU & (int)(uVar6 << 0xf) >> 0x1f) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
           (((ulong)(uVar6 >> 9) & 1) + (uVar21 >> 0xf)) * 8 + (ulong)((int)uVar23 != 0) * 0x10 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
           (ulong)(uint)((int)(uVar23 >> 0x14) * 0x58) + (uVar22 >> 0xd) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
           (ulong)((((uint)(uVar19 >> 0xd) & 3) + (uVar9 >> 2)) * 0x14)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__006ac3e0(param_1,param_2,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__006ab1fc(param_1,*param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


