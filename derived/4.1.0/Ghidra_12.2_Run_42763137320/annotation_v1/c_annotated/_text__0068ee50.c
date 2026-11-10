/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0058EE50
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068ee50; name: FUN_.text__0068ee50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0068ee50(long param_1,undefined8 param_2,uint *param_3,long param_4,long param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined8 param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  uint *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte *pbVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  short sVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ScalableFontEngine *this; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uVar16; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar17; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar19; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar20; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar21; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar22; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar23; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar24; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *pvVar25; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar26; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar27; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  size_t __n; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar29; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar31; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_a08; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_a00; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_9fc; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_9f8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_9f4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_9f0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_9ec; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_9e8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_9e4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_9e0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_9d8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_9d0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_9c8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_9c7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 uStack_9c6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  short sStack_9c4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  short sStack_9c2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_9c0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_9bc; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_9b8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_9b4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 uStack_9b0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  short local_9ae; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 local_9ac; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  short sStack_9aa; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_9a8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_9a4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_9a0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_998; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_990; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort local_98; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_88; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_80; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (((*param_3 & *param_3 - 1) == 0) && (*(long *)(param_3 + 2) != 0)) { // [自动静态注释] 条件判断/分支
    puVar1 = param_3 + 0x5a86; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar13 = *puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar17 = (ulong)uVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (0xffffffdf < uVar13 - 0x21) { // [自动静态注释] 条件判断/分支
      uVar22 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar19 = 0x16a1c; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        if (*(int *)((long)param_3 + lVar19) - 0x11U < 0xfffffff0) { // [自动静态注释] 条件判断/分支
          uVar22 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          goto LAB__text__0068efa8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        uVar22 = (ulong)(uint)(*(int *)((long)param_3 + lVar19) + (int)uVar22); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar17 = uVar17 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar19 = lVar19 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (uVar17 != 0); // [自动静态注释] 循环/迭代
      uVar17 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar24 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar19 = param_1 + 0x18a8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        while (*puVar1 <= uVar17) { // [自动静态注释] 循环/迭代
          *(undefined1 *)(lVar19 + uVar17 + -0x20) = 0;
          *(undefined8 *)(lVar19 + uVar17 * 8) = 0;
          uVar17 = uVar17 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (uVar17 == 0x20) goto LAB__text__0068ef64; // [自动静态注释] 条件判断/分支
        } // [自动静态注释] 作用域/控制流边界
        *(char *)(lVar19 + uVar17 + -0x20) = (char)param_3[uVar17 + 0x5a87];
        *(ulong *)(lVar19 + uVar17 * 8) = param_1 + (ulong)(byte)iVar24 + 0x19a8;
        iVar24 = iVar24 + param_3[uVar17 + 0x5a87]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar17 = uVar17 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (uVar17 != 0x20); // [自动静态注释] 循环/迭代
LAB__text__0068ef64: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar19 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        pcVar20 = (char *)(param_1 + 0x19a9 + lVar19); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        cVar11 = (char)lVar19; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        pcVar20[-1] = cVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *pcVar20 = cVar11 + '\x01';
        lVar19 = lVar19 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        pcVar20[1] = cVar11 + '\x02'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        pcVar20[2] = cVar11 + '\x03'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (lVar19 != 0x200); // [自动静态注释] 循环/迭代
      uVar13 = *puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__0068efa8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(uint *)(param_1 + 0x1884) = uVar13;
      *(char *)(param_1 + 0x1bd1) = (char)param_3[0x5cae];
      *(uint *)(param_1 + 0x1bd4) = param_3[0x5caf];
      lVar19 = _DAT_008a3820; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(long *)(param_3 + 0x5cb0) != 0) { // [自动静态注释] 条件判断/分支
        lVar19 = *(long *)(param_3 + 0x5cb0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *(long *)(param_1 + 0x1bd8) = lVar19;
      puVar4 = &LAB__text__00691a18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(undefined1 **)(param_3 + 0x5cb2) != (undefined1 *)0x0) { // [自动静态注释] 条件判断/分支
        puVar4 = *(undefined1 **)(param_3 + 0x5cb2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *(undefined1 **)(param_1 + 0x1be0) = puVar4;
      puVar4 = &LAB__text__00691a98; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(undefined1 **)(param_3 + 0x5cb4) != (undefined1 *)0x0) { // [自动静态注释] 条件判断/分支
        puVar4 = *(undefined1 **)(param_3 + 0x5cb4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *(undefined1 **)(param_1 + 0x1be8) = puVar4;
      uVar15 = (**(code **)(param_3 + 2))((long)((int)uVar22 * 0x32),4,*(undefined8 *)(param_3 + 4)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(undefined8 *)(param_1 + 0x18) = uVar15;
      uVar27 = -(uVar22 >> 0x1f) & 0xfffffffc00000000 | uVar22 << 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar26 = (long)(int)uVar22; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar15 = (**(code **)(param_3 + 2)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                         ((-(uVar22 >> 0x1f) & 0xffffffe000000000 | uVar22 << 5) - uVar27,4, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                          *(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x1bf0) = uVar15;
      uVar15 = (**(code **)(param_3 + 2))(uVar27,4,*(undefined8 *)(param_3 + 4)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(param_1 + 0x1bf8) = uVar15;
      uVar15 = (**(code **)(param_3 + 2))(lVar26,4,*(undefined8 *)(param_3 + 4)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(param_1 + 0x1c00) = uVar15;
      uVar15 = (**(code **)(param_3 + 2))(lVar26,4,*(undefined8 *)(param_3 + 4)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(param_1 + 0x1c08) = uVar15;
      uVar17 = -(uVar22 >> 0x1f) & 0xfffffffe00000000 | uVar22 << 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar15 = (**(code **)(param_3 + 2))(uVar17,4,*(undefined8 *)(param_3 + 4)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(param_1 + 0x1c10) = uVar15;
      uVar15 = (**(code **)(param_3 + 2))(lVar26,4,*(undefined8 *)(param_3 + 4)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(param_1 + 0x1c18) = uVar15;
      uVar15 = (**(code **)(param_3 + 2))(lVar26,4,*(undefined8 *)(param_3 + 4)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(param_1 + 0x1c20) = uVar15;
      uVar15 = (**(code **)(param_3 + 2))(uVar17,4,*(undefined8 *)(param_3 + 4)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(param_1 + 0x1c28) = uVar15;
      uVar15 = (**(code **)(param_3 + 2))(uVar27,4,*(undefined8 *)(param_3 + 4)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(param_1 + 0x1c30) = uVar15;
      uVar17 = -(uVar22 >> 0x1f) & 0xffffffc000000000 | uVar22 << 6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar15 = (**(code **)(param_3 + 2))(uVar17,4,*(undefined8 *)(param_3 + 4)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(param_1 + 0x1c38) = uVar15;
      uVar15 = (**(code **)(param_3 + 2))(uVar17,4,*(undefined8 *)(param_3 + 4)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(param_1 + 0x1c40) = uVar15;
      uVar15 = (**(code **)(param_3 + 2)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                         (-(uVar22 >> 0x1f) & 0xfffffff800000000 | uVar22 << 3,4, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                          *(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x1c48) = uVar15;
      *(uint *)(param_1 + 0x28) = *param_3;
      uVar13 = param_3[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(param_1 + 0x1880) = 0;
      *(undefined4 *)(param_1 + 0x1bcc) = 0;
      *(undefined1 *)(param_1 + 0x1bd0) = 0;
      *(uint *)(param_1 + 0x2c) = uVar13;
      *(undefined4 *)(param_1 + 0x1ba8) = 0xffffffff;
      *(undefined8 *)(param_1 + 0x1bbc) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x1bc4) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x1bac) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x1bb4) = 0xffffffffffffffff;
      *(undefined1 *)(param_1 + 0x1c50) = *(undefined1 *)((long)param_3 + 0x172d9);
      this = (ScalableFontEngine *)(**(code **)(param_3 + 2))(0xb8,4,*(undefined8 *)(param_3 + 4)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(ScalableFontEngine **)(param_1 + 8) = this;
      nn::fontll::ScalableFontEngine::ScalableFontEngine(this); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar19 = 0xb8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(char *)(param_1 + 0x1bd1) != '\0') { // [自动静态注释] 条件判断/分支
        lVar19 = (ulong)*(uint *)(param_1 + 0x1bd4) * 0xb8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      uVar15 = (**(code **)(param_3 + 2))(lVar19,4,*(undefined8 *)(param_3 + 4)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(param_1 + 0x10) = uVar15;
      if ((*(char *)(param_1 + 0x1bd1) == '\0') || (*(int *)(param_1 + 0x1bd4) != 0)) { // [自动静态注释] 条件判断/分支
        lVar19 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar17 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          nn::fontll::ScalableFontEngine::ScalableFontEngine // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    ((ScalableFontEngine *)(*(long *)(param_1 + 0x10) + lVar19)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          if (*(char *)(param_1 + 0x1bd1) == '\0') break; // [自动静态注释] 条件判断/分支
          lVar19 = lVar19 + 0xb8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar12 = uVar17 < *(uint *)(param_1 + 0x1bd4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar17 = uVar17 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (bVar12); // [自动静态注释] 循环/迭代
      } // [自动静态注释] 作用域/控制流边界
      pvVar25 = *(void **)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar13 = (**(code **)(param_3 + 2)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                         (*(undefined8 *)(param_3 + 0x5aa8),4,*(undefined8 *)(param_3 + 4)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      nn::fontll::ScalableFontEngine::Initialize(pvVar25,uVar13); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      nn::fontll::ScalableFontEngine::GetError(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if ((*(char *)(param_1 + 0x1bd1) == '\0') || (*(int *)(param_1 + 0x1bd4) != 0)) { // [自动静态注释] 条件判断/分支
        lVar19 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar17 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          lVar18 = *(long *)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if ((char)param_3[0x5aac] == '\0') { // [自动静态注释] 条件判断/分支
            uVar13 = (**(code **)(param_3 + 2)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                               (*(long *)(param_3 + 0x5aaa) * lVar26,4,*(undefined8 *)(param_3 + 4)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          } // [自动静态注释] 作用域/控制流边界
          else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            uVar13 = (**(code **)(param_3 + 2)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                               (*(long *)(param_3 + 0x5aaa),4,*(undefined8 *)(param_3 + 4)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          } // [自动静态注释] 作用域/控制流边界
          nn::fontll::ScalableFontEngine::Initialize((void *)(lVar18 + lVar19),uVar13); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          nn::fontll::ScalableFontEngine::GetError(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          if (*(char *)(param_1 + 0x1bd1) == '\0') break; // [自动静态注释] 条件判断/分支
          lVar19 = lVar19 + 0xb8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          bVar12 = uVar17 < *(uint *)(param_1 + 0x1bd4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar17 = uVar17 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (bVar12); // [自动静态注释] 循环/迭代
      } // [自动静态注释] 作用域/控制流边界
      uVar17 = (ulong)*(uint *)(param_1 + 0x1884); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(uint *)(param_1 + 0x1884) != 0) { // [自动静态注释] 条件判断/分支
        uVar22 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar27 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          pbVar2 = (byte *)(param_1 + uVar22 + 0x1888); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (*pbVar2 != 0) { // [自动静态注释] 条件判断/分支
            uVar17 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar27 = (ulong)(int)uVar27; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            do { // [自动静态注释] 循环/迭代
              pvVar25 = *(void **)(param_3 + uVar22 * 0x20 + uVar17 * 2 + 6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              if ((param_3[uVar22 * 0x10 + uVar17 + 0xe86] & 0xfffffffe) == 2) { // [自动静态注释] 条件判断/分支
                pvVar25 = (void *)nn::fontll::ScalableFontEngineHelper::Decode // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                                            (pvVar25,param_3[uVar22 * 0x20 + uVar17 * 2 + 0x406], // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                                             (_func_ulong_void_ptr_ulong_void_ptr_ulong_void_ptr_ulong_void_ptr_ulong // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                                              *)0x0,(uchar *)0x0);
              } // [自动静态注释] 作用域/控制流边界
              iVar24 = (int)uVar27; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              *(int *)(*(long *)(param_1 + 0x1bf8) + uVar27 * 4) =
                   (int)((float)param_3[uVar22 * 0x10 + uVar17 + 0x806] * 65536.0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              lVar19 = uVar17 + uVar22 * 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              *(undefined1 *)(*(long *)(param_1 + 0x1c00) + uVar27) =
                   *(undefined1 *)((long)param_3 + lVar19 + 0x2818);
              pcVar20 = (char *)((long)param_3 + lVar19 + 0x4418); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              *(char *)(*(long *)(param_1 + 0x1c08) + uVar27) = *pcVar20;
              lVar26 = uVar17 * 2 + uVar22 * 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              *(undefined2 *)(*(long *)(param_1 + 0x1c10) + uVar27 * 2) =
                   *(undefined2 *)((long)param_3 + lVar26 + 0x4618);
              pcVar3 = (char *)((long)param_3 + lVar19 + 0x4a18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              *(char *)(*(long *)(param_1 + 0x1c18) + uVar27) = *pcVar3;
              *(undefined1 *)(*(long *)(param_1 + 0x1c20) + uVar27) =
                   *(undefined1 *)((long)param_3 + lVar19 + 0x4c18);
              *(undefined2 *)(*(long *)(param_1 + 0x1c28) + uVar27 * 2) =
                   *(undefined2 *)((long)param_3 + lVar26 + 0x4e18);
              *(uint *)(*(long *)(param_1 + 0x1c30) + uVar27 * 4) =
                   param_3[uVar22 * 0x10 + uVar17 + 0x1886]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              lVar19 = uVar27 * 0x40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              *(uint *)(*(long *)(param_1 + 0x1c38) + lVar19) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x1a86]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              *(uint *)(*(long *)(param_1 + 0x1c40) + lVar19) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x3a86]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              *(uint *)(*(long *)(param_1 + 0x1c38) + lVar19 + 4) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x1a87]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              *(uint *)(*(long *)(param_1 + 0x1c40) + lVar19 + 4) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x3a87]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              *(uint *)(*(long *)(param_1 + 0x1c38) + lVar19 + 8) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x1a88]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              *(uint *)(*(long *)(param_1 + 0x1c40) + lVar19 + 8) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x3a88]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              *(uint *)(*(long *)(param_1 + 0x1c38) + lVar19 + 0xc) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x1a89]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              *(uint *)(*(long *)(param_1 + 0x1c40) + lVar19 + 0xc) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x3a89]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              *(uint *)(*(long *)(param_1 + 0x1c38) + lVar19 + 0x10) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x1a8a]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              *(uint *)(*(long *)(param_1 + 0x1c40) + lVar19 + 0x10) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x3a8a]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              *(uint *)(*(long *)(param_1 + 0x1c38) + lVar19 + 0x14) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x1a8b]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              *(uint *)(*(long *)(param_1 + 0x1c40) + lVar19 + 0x14) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x3a8b]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              *(uint *)(*(long *)(param_1 + 0x1c38) + lVar19 + 0x18) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x1a8c]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              *(uint *)(*(long *)(param_1 + 0x1c40) + lVar19 + 0x18) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x3a8c]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              *(uint *)(*(long *)(param_1 + 0x1c38) + lVar19 + 0x1c) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x1a8d]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              *(uint *)(*(long *)(param_1 + 0x1c40) + lVar19 + 0x1c) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x3a8d]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              *(uint *)(*(long *)(param_1 + 0x1c38) + lVar19 + 0x20) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x1a8e]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              *(uint *)(*(long *)(param_1 + 0x1c40) + lVar19 + 0x20) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x3a8e]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              *(uint *)(*(long *)(param_1 + 0x1c38) + lVar19 + 0x24) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x1a8f]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              *(uint *)(*(long *)(param_1 + 0x1c40) + lVar19 + 0x24) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x3a8f]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              *(uint *)(*(long *)(param_1 + 0x1c38) + lVar19 + 0x28) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x1a90]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              *(uint *)(*(long *)(param_1 + 0x1c40) + lVar19 + 0x28) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x3a90]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              *(uint *)(*(long *)(param_1 + 0x1c38) + lVar19 + 0x2c) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x1a91]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              *(uint *)(*(long *)(param_1 + 0x1c40) + lVar19 + 0x2c) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x3a91]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              *(uint *)(*(long *)(param_1 + 0x1c38) + lVar19 + 0x30) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x1a92]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              *(uint *)(*(long *)(param_1 + 0x1c40) + lVar19 + 0x30) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x3a92]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              *(uint *)(*(long *)(param_1 + 0x1c38) + lVar19 + 0x34) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x1a93]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              *(uint *)(*(long *)(param_1 + 0x1c40) + lVar19 + 0x34) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x3a93]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              *(uint *)(*(long *)(param_1 + 0x1c38) + lVar19 + 0x38) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x1a94]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              *(uint *)(*(long *)(param_1 + 0x1c40) + lVar19 + 0x38) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x3a94]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              *(uint *)(*(long *)(param_1 + 0x1c38) + lVar19 + 0x3c) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x1a95]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              *(uint *)(*(long *)(param_1 + 0x1c40) + lVar19 + 0x3c) =
                   param_3[uVar22 * 0x100 + uVar17 * 0x10 + 0x3a95]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              nn::fontll::ScalableFontEngine::LoadFont // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        (*(char **)(param_1 + 8), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                         (void *)(*(long *)(param_1 + 0x18) + (ulong)(uint)(iVar24 * 0x32)), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                         (uint)pvVar25,param_3[uVar22 * 0x10 + uVar17 + 0x5aae]); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              nn::fontll::ScalableFontEngine::GetError(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              if ((*(char *)(param_1 + 0x1bd1) == '\0') || (*(int *)(param_1 + 0x1bd4) != 0)) { // [自动静态注释] 条件判断/分支
                lVar19 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                uVar23 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                do { // [自动静态注释] 循环/迭代
                  nn::fontll::ScalableFontEngine::LoadFont // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                            ((char *)(*(long *)(param_1 + 0x10) + lVar19), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                             (void *)(*(long *)(param_1 + 0x18) + (ulong)(uint)(iVar24 * 0x32)), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                             (uint)pvVar25,param_3[uVar22 * 0x10 + uVar17 + 0x5aae]); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  nn::fontll::ScalableFontEngine::GetError(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  if (*(char *)(param_1 + 0x1bd1) == '\0') break; // [自动静态注释] 条件判断/分支
                  lVar19 = lVar19 + 0xb8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  bVar12 = uVar23 < *(uint *)(param_1 + 0x1bd4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  uVar23 = uVar23 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                } while (bVar12); // [自动静态注释] 循环/迭代
              } // [自动静态注释] 作用域/控制流边界
              if (*(int *)(param_1 + 0x1ba8) != iVar24) { // [自动静态注释] 条件判断/分支
                nn::fontll::ScalableFontEngine::SetFont(*(char **)(param_1 + 8)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                nn::fontll::ScalableFontEngine::GetError(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                nn::fontll::ScalableFontEngine::SetBoldWeight((int)*(undefined8 *)(param_1 + 8)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                nn::fontll::ScalableFontEngine::GetError(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                uVar15 = *(undefined8 *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                uVar16 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                if (*(char *)(*(long *)(param_1 + 0x1c00) + (uVar27 & 0xffffffff)) != '\0') { // [自动静态注释] 条件判断/分支
                  nn::fontll::ScalableFontEngine::SetOutlineWidth((ushort)uVar15); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  uVar15 = *(undefined8 *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  uVar16 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                } // [自动静态注释] 作用域/控制流边界
                nn::fontll::ScalableFontEngine::SetFlags(uVar15,uVar16); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                nn::fontll::ScalableFontEngine::GetError(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                *(int *)(param_1 + 0x1ba8) = iVar24;
              } // [自动静态注释] 作用域/控制流边界
              memset(&local_9c8,0,0x93c); // [自动静态注释] 内存复制、清零或移动
              nn::fontll::ScalableFontEngine::GetFontMetrics(*(Metrics **)(param_1 + 8)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              nn::fontll::ScalableFontEngine::GetError(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              sVar10 = *(short *)((long)param_3 + lVar26 + 0x5a18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              if (sVar10 != 0) { // [自动静态注释] 条件判断/分支
                sStack_9c4 = sVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                sStack_9aa = sVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              } // [自动静态注释] 作用域/控制流边界
              sVar10 = *(short *)((long)param_3 + lVar26 + 0x5e18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              if (sVar10 != 0) { // [自动静态注释] 条件判断/分支
                local_9ae = -sVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                sStack_9c2 = sVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              } // [自动静态注释] 作用域/控制流边界
              lVar19 = uVar27 * 0x1c; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              fVar29 = (float)NEON_ucvtf((uint)local_98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              *(float *)(*(long *)(param_1 + 0x1bf0) + lVar19 + 8) = (float)(int)sStack_9aa / fVar29
              ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              fVar29 = (float)NEON_ucvtf((uint)local_98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              *(float *)(*(long *)(param_1 + 0x1bf0) + lVar19 + 0xc) =
                   (float)((int)sStack_9aa - (int)local_9ae) / fVar29; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              fVar29 = (float)NEON_ucvtf((uint)local_98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              *(float *)(*(long *)(param_1 + 0x1bf0) + lVar19) = (float)(int)sStack_9c4 / fVar29;
              fVar29 = (float)NEON_ucvtf((uint)local_98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              *(float *)(*(long *)(param_1 + 0x1bf0) + lVar19 + 4) =
                   (float)((int)sStack_9c2 + (int)sStack_9c4) / fVar29; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              *(uint *)(*(long *)(param_1 + 0x1bf0) + lVar19 + 0x10) =
                   param_3[uVar22 * 0x10 + uVar17 + 0xa86]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              *(uint *)(*(long *)(param_1 + 0x1bf0) + lVar19 + 0x14) =
                   param_3[uVar22 * 0x10 + uVar17 + 0xc86]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              *(uint *)(*(long *)(param_1 + 0x1bf0) + lVar19 + 0x18) =
                   param_3[uVar22 * 0x10 + uVar17 + 0x1486]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              if ((((param_3[uVar22 * 0x10 + uVar17 + 0xe86] | 2) == 3) && (*pcVar20 == '\0')) && // [自动静态注释] 条件判断/分支
                 (*pcVar3 == '\0')) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                uVar15 = nn::fontll::ScalableFontEngine::InitializeOtfKerningTable // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                                   (*(_func_void_ptr_ulong_ulong_void_ptr **)(param_1 + 8), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                                    *(void **)(param_3 + 2),SUB81(*(undefined8 *)(param_3 + 4),0));
              } // [自动静态注释] 作用域/控制流边界
              else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                uVar15 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              } // [自动静态注释] 作用域/控制流边界
              uVar17 = uVar17 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              *(undefined8 *)(*(long *)(param_1 + 0x1c48) + uVar27 * 8) = uVar15;
              uVar27 = uVar27 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            } while (uVar17 < *pbVar2); // [自动静态注释] 循环/迭代
            uVar17 = (ulong)*(uint *)(param_1 + 0x1884); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          uVar22 = uVar22 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (uVar22 < uVar17); // [自动静态注释] 循环/迭代
        if (uVar17 != 0) { // [自动静态注释] 条件判断/分支
          uVar22 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          lVar19 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          do { // [自动静态注释] 循环/迭代
            pbVar2 = (byte *)(param_1 + uVar22 + 0x1888); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            bVar9 = *pbVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar27 = (ulong)bVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar23 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            if (uVar27 != 0) { // [自动静态注释] 条件判断/分支
              uVar28 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              lVar26 = lVar19 * 0x1c; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              uVar31 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              fVar29 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              uVar30 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              puVar21 = (undefined4 *)(*(long *)(param_1 + 0x1bf0) + lVar26 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              pcVar20 = (char *)(*(long *)(param_1 + 0x1c20) + lVar19); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              do { // [自动静态注释] 循环/迭代
                if ((*pcVar20 == '\0') && (fVar29 < (float)puVar21[1])) { // [自动静态注释] 条件判断/分支
                  uVar28 = puVar21[-1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  uVar30 = *puVar21; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  uVar31 = puVar21[-2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  fVar29 = (float)puVar21[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                } // [自动静态注释] 作用域/控制流边界
                uVar27 = uVar27 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                puVar21 = puVar21 + 7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                pcVar20 = pcVar20 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              } while (uVar27 != 0); // [自动静态注释] 循环/迭代
              if (bVar9 == 0) { // [自动静态注释] 条件判断/分支
                uVar23 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              } // [自动静态注释] 作用域/控制流边界
              else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                uVar17 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                do { // [自动静态注释] 循环/迭代
                  uVar17 = uVar17 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  *(undefined4 *)(*(long *)(param_1 + 0x1bf0) + lVar26 + 8) = uVar30;
                  *(float *)(*(long *)(param_1 + 0x1bf0) + lVar26 + 0xc) = fVar29;
                  *(undefined4 *)(*(long *)(param_1 + 0x1bf0) + lVar26) = uVar31;
                  lVar18 = *(long *)(param_1 + 0x1bf0) + lVar26; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  lVar26 = lVar26 + 0x1c; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  *(undefined4 *)(lVar18 + 4) = uVar28;
                  uVar23 = (ulong)*pbVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                } while (uVar17 < uVar23); // [自动静态注释] 循环/迭代
                uVar17 = (ulong)*(uint *)(param_1 + 0x1884); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              } // [自动静态注释] 作用域/控制流边界
            } // [自动静态注释] 作用域/控制流边界
            uVar22 = uVar22 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            lVar19 = lVar19 + uVar23; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } while (uVar22 < uVar17); // [自动静态注释] 循环/迭代
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      iVar24 = *(int *)(param_1 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar6 = *(int *)(param_1 + 0x2c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__0068d4cc(param_1 + 0x1ea8,*(undefined8 *)(param_1 + 0x20),8,iVar24,iVar6,1,1); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar28 = *(undefined4 *)(param_1 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar31 = *(undefined4 *)(param_1 + 0x2c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_9d8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_9d0 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_9e8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_9e4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_9e0 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_9f8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_9f4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_9f0 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_9ec = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_a08 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_a00 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_9fc = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__006ebe40(&local_a08); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar15 = local_a08; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar30 = *(undefined4 *)(param_1 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar7 = *(undefined4 *)(param_1 + 0x2c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_9ec = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_9e8 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_9fc = 0x201; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_9f8 = 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_a08._4_4_ = SUB84(uVar15,4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_a08._0_4_ = CONCAT22(1,CONCAT11(2,(undefined1)local_a08)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_a08 = CONCAT26(1,(undefined6)local_a08); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_998 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_990 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_9a8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_9a4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_9a0 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_9b8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_9b4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_9b0 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_9ae = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_9ac = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      sStack_9aa = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_9c8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_9c7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_9c6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      sStack_9c4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      sStack_9c2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_9c0 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_9bc = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_9f4 = uVar28; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_9f0 = uVar31; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__006ebe40(&local_9c8); // [自动静态注释] 调用尚未恢复正式名称的函数
      uStack_9b0 = (undefined2)uVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_9ae = (short)((uint)uVar7 >> 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_9ac = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      sStack_9aa = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_9a8 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_9c7 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_9bc = 0x201; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_9b8 = 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_9c6 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      sStack_9c2 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_78 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_70 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_88 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_80 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_9b4 = uVar30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__006ebc14(&local_88); // [自动静态注释] 调用尚未恢复正式名称的函数
      local_88 = CONCAT44(local_88._4_4_,0x22); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar17 = FUN__text__006f5764(param_2,&local_9c8); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar22 = FUN__text__006ee660(param_2,&local_88); // [自动静态注释] 调用尚未恢复正式名称的函数
      iVar5 = *(int *)(param_1 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar8 = *(int *)(param_1 + 0x2c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_9b8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_9b4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_9b0 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_9ae = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_9ac = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      sStack_9aa = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_9c8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_9c7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_9c6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      sStack_9c4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      sStack_9c2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_9c0 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_9bc = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__006ebc14(&local_9c8); // [自动静态注释] 调用尚未恢复正式名称的函数
      local_9c8 = 0x22; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_9c7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_9c6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar14 = FUN__text__006ee668(param_2,&local_9c8); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar13 = (iVar14 + iVar8 * iVar5) - 1U & -iVar14; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      __n = (size_t)(int)uVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (param_4 == 0) { // [自动静态注释] 条件判断/分支
        if (uVar17 <= uVar22) { // [自动静态注释] 条件判断/分支
          uVar17 = uVar22; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        pvVar25 = (void *)(**(code **)(param_3 + 2))(__n,uVar17,*(undefined8 *)(param_3 + 4)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(void **)(param_1 + 0x20) = pvVar25;
        memset(pvVar25,0,__n); // [自动静态注释] 内存复制、清零或移动
        local_9b8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uStack_9b4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uStack_9b0 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_9ae = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_9ac = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        sStack_9aa = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_9c8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uStack_9c7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uStack_9c6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        sStack_9c4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        sStack_9c2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_9c0 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uStack_9bc = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        FUN__text__006ebc14(&local_9c8); // [自动静态注释] 调用尚未恢复正式名称的函数
        local_9c8 = 0x22; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uStack_9c7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uStack_9c6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        sStack_9c4 = (short)uVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        sStack_9c2 = (short)(uVar13 >> 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_9c0 = (undefined4)*(undefined8 *)(param_1 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uStack_9bc = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        param_4 = param_1 + 0x1d78; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        FUN__text__006ee680(param_4,param_2,&local_9c8); // [自动静态注释] 调用尚未恢复正式名称的函数
        FUN__text__006f5944(param_1 + 0x1c58,param_2,&local_a08,param_4,0,iVar6 * iVar24); // [自动静态注释] 调用尚未恢复正式名称的函数
        param_5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        lVar19 = FUN__text__006ee750(param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
        *(void **)(param_1 + 0x20) = (void *)(lVar19 + param_5);
        memset((void *)(lVar19 + param_5),0,__n); // [自动静态注释] 内存复制、清零或移动
        FUN__text__006ee764(param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
        FUN__text__006f5944(param_1 + 0x1c58,param_2,&local_a08,param_4,param_5,param_6); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      *(long *)(param_1 + 0x1e98) = param_4;
      *(long *)(param_1 + 0x1ea0) = param_5;
      local_998 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_990 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_9a8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_9a4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_9a0 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_9b8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_9b4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_9b0 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_9ae = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_9ac = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      sStack_9aa = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_9c8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_9c7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_9c6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      sStack_9c4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      sStack_9c2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_9c0 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_9bc = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__006ebe70(&local_9c8); // [自动静态注释] 调用尚未恢复正式名称的函数
      local_9c8 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      sStack_9c4 = 0x201; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      sStack_9c2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_9c0 = 0x2010101; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_998 = param_1 + 0x1c58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__006f5a88(param_1 + 0x1d30,param_2,&local_9c8); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00691ac0(param_1 + 0x30,*(undefined8 *)(param_3 + 2),*(undefined8 *)(param_3 + 4), // [自动静态注释] 调用尚未恢复正式名称的函数
                          param_3[0x5aad]); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if ((char)param_3[0x5cb6] != '\0') { // [自动静态注释] 条件判断/分支
        nn::fontll::ScalableFontEngine::SetAutoHint(SUB81(*(undefined8 *)(param_1 + 8),0)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


