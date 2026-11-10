/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00461890
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00561890; name: FUN_.text__00561890
 */


void FUN__text__00561890(long param_1,long param_2,uint param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar16; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar17; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar19; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar20; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar21; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar22; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar23; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar24; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar25; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar26; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar27; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar29; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar31; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar32; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar33; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar34; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar35; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar36; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__00561970(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((param_3 & 3) != 0) { // [自动静态注释] 条件判断/分支
    iVar2 = 4 - (param_3 & 3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    memset((void *)(param_2 + (ulong)param_3 * 4),0,(ulong)(uint)(iVar2 * 4)); // [自动静态注释] 内存复制、清零或移动
    param_3 = iVar2 + param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  fVar12 = (float)*(undefined8 *)(param_1 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar11 = (float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar36 = (float)*(undefined8 *)(param_1 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar35 = (float)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_3 != 0) { // [自动静态注释] 条件判断/分支
    uVar16 = *(undefined8 *)(param_1 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar15 = *(undefined8 *)(param_1 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar18 = *(undefined8 *)(param_1 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar17 = *(undefined8 *)(param_1 + 0x90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar20 = *(undefined8 *)(param_1 + 0xa8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar19 = *(undefined8 *)(param_1 + 0xa0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar22 = *(undefined8 *)(param_1 + 0xb8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar21 = *(undefined8 *)(param_1 + 0xb0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar24 = *(undefined8 *)(param_1 + 200); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar23 = *(undefined8 *)(param_1 + 0xc0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar26 = *(undefined8 *)(param_1 + 0xd8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar25 = *(undefined8 *)(param_1 + 0xd0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar28 = *(undefined8 *)(param_1 + 0xe8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar27 = *(undefined8 *)(param_1 + 0xe0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar30 = *(undefined8 *)(param_1 + 0xf8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar29 = *(undefined8 *)(param_1 + 0xf0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar14 = fVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar13 = fVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      lVar3 = uVar5 * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar1 = (int)uVar5 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar5 = (ulong)uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar4 = (undefined8 *)(param_2 + lVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar34 = puVar4[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar32 = *puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar31 = (float)uVar32; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar33 = (float)((ulong)uVar32 >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar11 = (float)uVar34; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar12 = (float)((ulong)uVar34 >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar6 = (float)uVar27 * fVar36; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar8 = (float)((ulong)uVar27 >> 0x20) * fVar36; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar7 = (float)uVar29 * fVar35; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar9 = (float)((ulong)uVar29 >> 0x20) * fVar35; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar10 = (float)((ulong)uVar30 >> 0x20) * fVar35; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar35 = fVar11 * (float)uVar16 + (float)uVar24 * fVar13 + (float)uVar26 * fVar14 + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
               (float)uVar18 * fVar11 + (float)uVar20 * fVar33 + (float)uVar22 * fVar31 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
               (float)uVar28 * fVar36 + (float)uVar30 * fVar35; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      fVar36 = fVar12 * (float)((ulong)uVar16 >> 0x20) + (float)((ulong)uVar24 >> 0x20) * fVar13 + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
               (float)((ulong)uVar26 >> 0x20) * fVar14 + (float)((ulong)uVar18 >> 0x20) * fVar11 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
               (float)((ulong)uVar20 >> 0x20) * fVar33 + (float)((ulong)uVar22 >> 0x20) * fVar31 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
               (float)((ulong)uVar28 >> 0x20) * fVar36 + fVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      puVar4 = (undefined8 *)(param_2 + lVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar4[1] = CONCAT44(fVar36,fVar35); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar4 = CONCAT44(fVar33 * (float)((ulong)uVar15 >> 0x20) +
                         (float)((ulong)uVar23 >> 0x20) * fVar13 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                         (float)((ulong)uVar25 >> 0x20) * fVar14 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                         (float)((ulong)uVar17 >> 0x20) * fVar11 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                         (float)((ulong)uVar19 >> 0x20) * fVar33 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                         (float)((ulong)uVar21 >> 0x20) * fVar31 + fVar8 + fVar9, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                         fVar31 * (float)uVar15 + (float)uVar23 * fVar13 + (float)uVar25 * fVar14 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                         (float)uVar17 * fVar11 + (float)uVar19 * fVar33 + (float)uVar21 * fVar31 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                         fVar6 + fVar7); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      fVar14 = fVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar13 = fVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar1 < param_3); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  *(ulong *)(param_1 + 0x70) = CONCAT44(fVar11,fVar12);
  *(ulong *)(param_1 + 0x78) = CONCAT44(fVar35,fVar36);
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


