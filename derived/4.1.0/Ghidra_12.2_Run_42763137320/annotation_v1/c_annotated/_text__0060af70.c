/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：PH4_ToLGPE
 * 用途/行为：PH4 Core/Tag → LGPE PB7 转换
 * 证据等级：VERIFIED_NATIVE_STATIC；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0060af70; name: FUN_.text__0060af70
 */


undefined8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__0060af70(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined1 *param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  char *pcVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 *puVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar16; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar17; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_60 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__0060e76c(auStack_60,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar9 = FUN__text__0060e7f8(auStack_60); // [自动静态注释] 调用尚未恢复正式名称的函数
  pcVar1 = (char *)(local_58 + 0xd8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar10 = FUN__text__0060e994(auStack_60,pcVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  do { // [自动静态注释] 循环/迭代
    if ((uVar10 & 1) == 0) { // [自动静态注释] 条件判断/分支
      uVar17 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__0060b45c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__0060e79c(auStack_60); // [自动静态注释] 调用尚未恢复正式名称的函数
      return uVar17; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if (*pcVar1 == '\x01') { // [自动静态注释] 条件判断/分支
      param_1[0x1b] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1[0x1c] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *param_1 = 0;
      param_1[0x19] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1[0x1a] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1[0x17] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1[0x18] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1[0x15] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1[0x16] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1[0x13] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1[0x14] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1[0x11] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1[0x12] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1[0xf] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1[0x10] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1[0xd] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1[0xe] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1[0xb] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1[0xc] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1[9] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1[10] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1[7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1[8] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1[6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)param_1 = *(undefined4 *)(lVar9 + 8);
      *(ushort *)((long)param_1 + 4) = (*(byte *)(lVar9 + 0xc) & 1) << 2;
      *(undefined2 *)((long)param_1 + 6) = 0;
      puVar11 = (undefined2 *)FUN__text__0063fb10(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      puVar12 = (undefined8 *)FUN__text__0063fb38(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      puVar13 = (undefined8 *)FUN__text__0063fb60(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      puVar14 = (undefined8 *)FUN__text__0063fb88(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      *puVar11 = *(undefined2 *)(lVar9 + 0xd);
      bVar4 = *(byte *)((long)puVar11 + 0xd); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar11[1] = *(undefined2 *)(lVar9 + 0xc2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(puVar11 + 2) = *(undefined4 *)(lVar9 + 0xf);
      *(undefined4 *)(puVar11 + 4) = *(undefined4 *)(lVar9 + 0x13);
      *(char *)(puVar11 + 6) = pcVar1[0x3f];
      bVar5 = pcVar1[0x41]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(byte *)((long)puVar11 + 0xd) = bVar4 & 0xfe | bVar5 & 1;
      bVar5 = bVar5 & 1 | ((byte)pcVar1[0x41] >> 1 & 1) << 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(byte *)((long)puVar11 + 0xd) = bVar4 & 0xfc | bVar5;
      bVar5 = bVar5 | ((byte)pcVar1[0x41] >> 2 & 1) << 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(byte *)((long)puVar11 + 0xd) = bVar4 & 0xf8 | bVar5;
      bVar6 = *(byte *)((long)puVar11 + 0x15); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(byte *)((long)puVar11 + 0xd) = (*(byte *)(lVar9 + 0x17) & 1) << 3 | bVar4 & 0xf0 | bVar5;
      puVar11[7] = *(undefined2 *)(lVar9 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(puVar11 + 8) = *(undefined4 *)(lVar9 + 0x1a);
      *(undefined1 *)(puVar11 + 10) = *(undefined1 *)(lVar9 + 0x1e);
      bVar4 = *(byte *)(lVar9 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar5 = bVar4 & 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(byte *)((long)puVar11 + 0x15) = bVar6 & 0xfe | bVar5;
      bVar8 = (*(byte *)(lVar9 + 0x21) & 3) << 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(byte *)((long)puVar11 + 0x15) = bVar8 | bVar6 & 0xf8 | bVar5;
      *(byte *)((long)puVar11 + 0x15) = bVar8 | *(char *)(lVar9 + 0x22) << 3 | bVar4 & 1;
      *(undefined1 *)(puVar11 + 0xb) = *(undefined1 *)(lVar9 + 0x24);
      *(undefined1 *)((long)puVar11 + 0x17) = *(undefined1 *)(lVar9 + 0x25);
      *(undefined1 *)(puVar11 + 0xc) = *(undefined1 *)(lVar9 + 0x26);
      *(undefined1 *)((long)puVar11 + 0x19) = *(undefined1 *)(lVar9 + 0x27);
      *(undefined1 *)(puVar11 + 0xd) = *(undefined1 *)(lVar9 + 0x28);
      *(undefined1 *)((long)puVar11 + 0x1b) = *(undefined1 *)(lVar9 + 0x29);
      *(char *)(puVar11 + 0xe) = pcVar1[3];
      *(char *)((long)puVar11 + 0x1d) = pcVar1[4];
      *(char *)(puVar11 + 0xf) = pcVar1[5];
      *(char *)((long)puVar11 + 0x1f) = pcVar1[6];
      *(char *)(puVar11 + 0x10) = pcVar1[7];
      *(char *)((long)puVar11 + 0x21) = pcVar1[8];
      *(char *)(puVar11 + 0x11) = pcVar1[9];
      *(char *)((long)puVar11 + 0x23) = pcVar1[0x3e];
      *(undefined4 *)(puVar11 + 0x12) = *(undefined4 *)(pcVar1 + 0x22);
      *(undefined4 *)(puVar11 + 0x14) = *(undefined4 *)(lVar9 + 0x30);
      *(undefined4 *)(puVar11 + 0x16) = *(undefined4 *)(lVar9 + 0x34);
      *(undefined1 *)(puVar11 + 0x18) = *(undefined1 *)(lVar9 + 0x38);
      *(undefined1 *)((long)puVar11 + 0x31) = *(undefined1 *)(lVar9 + 0x39);
      *(undefined1 *)(puVar11 + 0x19) = *(undefined1 *)(lVar9 + 0x42);
      *(undefined1 *)((long)puVar11 + 0x33) = *(undefined1 *)(lVar9 + 0x43);
      *(undefined4 *)(puVar11 + 0x1a) = *(undefined4 *)(lVar9 + 0x94);
      uVar17 = *(undefined8 *)(lVar9 + 0x44); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar15 = *(undefined8 *)(lVar9 + 0x4c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar16 = *(undefined8 *)(lVar9 + 0x54); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined2 *)(puVar12 + 3) = *(undefined2 *)(lVar9 + 0x5c);
      *puVar12 = uVar17;
      puVar12[1] = uVar15; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar12[2] = uVar16; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar3 = *(uint *)((long)puVar12 + 0x34); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)((long)puVar12 + 0x1a) = *(undefined8 *)(pcVar1 + 10);
      *(undefined4 *)((long)puVar12 + 0x22) = *(undefined4 *)(pcVar1 + 0x12);
      *(undefined4 *)((long)puVar12 + 0x26) = *(undefined4 *)(pcVar1 + 0x16);
      uVar17 = *(undefined8 *)(pcVar1 + 0x1a); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined2 *)((long)puVar12 + 0x32) = 0;
      *(undefined8 *)((long)puVar12 + 0x2a) = uVar17;
      uVar2 = *(byte *)(lVar9 + 0x60) & 0x1f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(uint *)((long)puVar12 + 0x34) = uVar3 & 0xffffffe0 | uVar2;
      uVar2 = uVar2 | (*(byte *)(lVar9 + 0x61) & 0x1f) << 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(uint *)((long)puVar12 + 0x34) = uVar3 & 0xfffffc00 | uVar2;
      uVar2 = uVar2 | (*(byte *)(lVar9 + 0x62) & 0x1f) << 10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(uint *)((long)puVar12 + 0x34) = uVar3 & 0xffff8000 | uVar2;
      uVar2 = uVar2 | (*(byte *)(lVar9 + 99) & 0x1f) << 0xf; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(uint *)((long)puVar12 + 0x34) = uVar3 & 0xfff00000 | uVar2;
      uVar2 = uVar2 | (*(byte *)(lVar9 + 100) & 0x1f) << 0x14; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(uint *)((long)puVar12 + 0x34) = uVar3 & 0xfe000000 | uVar2;
      uVar2 = uVar2 | (*(byte *)(lVar9 + 0x65) & 0x1f) << 0x19; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(uint *)((long)puVar12 + 0x34) = uVar3 & 0xc0000000 | uVar2;
      uVar2 = uVar2 | (*(byte *)(lVar9 + 0x66) & 1) << 0x1e; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(uint *)((long)puVar12 + 0x34) = uVar3 & 0x80000000 | uVar2;
      *(uint *)((long)puVar12 + 0x34) = uVar2 | (uint)*(byte *)(lVar9 + 0x67) << 0x1f;
      uVar17 = *(undefined8 *)(lVar9 + 0x6c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar15 = *(undefined8 *)(lVar9 + 0x74); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar16 = *(undefined8 *)(lVar9 + 0x7c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined2 *)(puVar13 + 3) = *(undefined2 *)(lVar9 + 0x84);
      *puVar13 = uVar17;
      puVar13[1] = uVar15; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar13[2] = uVar16; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined1 *)((long)puVar13 + 0x1a) = *(undefined1 *)(lVar9 + 0x86);
      *(undefined1 *)((long)puVar13 + 0x1b) = *(undefined1 *)(lVar9 + 0x88);
      *(undefined4 *)((long)puVar13 + 0x1c) = *(undefined4 *)(pcVar1 + 0x35);
      *(undefined2 *)((long)puVar13 + 0x26) = *(undefined2 *)(lVar9 + 0x89);
      *(undefined1 *)((long)puVar13 + 0x2a) = *(undefined1 *)(lVar9 + 0x8b);
      *(undefined1 *)((long)puVar13 + 0x2c) = *(undefined1 *)(lVar9 + 0x8c);
      *(undefined1 *)((long)puVar13 + 0x2d) = *(undefined1 *)(lVar9 + 0x8d);
      *(undefined1 *)((long)puVar13 + 0x2e) = *(undefined1 *)(lVar9 + 0x8e);
      *(undefined2 *)(puVar13 + 6) = *(undefined2 *)(lVar9 + 0x8f);
      *(char *)((long)puVar13 + 0x34) = pcVar1[0x2a];
      *(char *)((long)puVar13 + 0x35) = pcVar1[0x2b];
      *(char *)((long)puVar13 + 0x36) = pcVar1[0x2c];
      *(char *)((long)puVar13 + 0x37) = pcVar1[0x34];
      uVar17 = *(undefined8 *)(lVar9 + 0x99); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar15 = *(undefined8 *)(lVar9 + 0xa1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar16 = *(undefined8 *)(lVar9 + 0xa9); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined2 *)(puVar14 + 3) = *(undefined2 *)(lVar9 + 0xb1);
      puVar14[1] = uVar15; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar14[2] = uVar16; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar14 = uVar17;
      *(undefined1 *)((long)puVar14 + 0x1a) = *(undefined1 *)(lVar9 + 0xb3);
      *(char *)((long)puVar14 + 0x1b) = pcVar1[0x2e];
      *(char *)((long)puVar14 + 0x1c) = pcVar1[0x2f];
      *(char *)((long)puVar14 + 0x1d) = pcVar1[0x30];
      *(char *)((long)puVar14 + 0x1e) = pcVar1[0x31];
      *(char *)((long)puVar14 + 0x1f) = pcVar1[0x32];
      *(char *)(puVar14 + 4) = pcVar1[0x33];
      *(undefined1 *)((long)puVar14 + 0x21) = *(undefined1 *)(lVar9 + 0xb9);
      *(undefined1 *)((long)puVar14 + 0x22) = *(undefined1 *)(lVar9 + 0xba);
      *(undefined1 *)((long)puVar14 + 0x23) = *(undefined1 *)(lVar9 + 0xbb);
      *(undefined1 *)((long)puVar14 + 0x24) = *(undefined1 *)(lVar9 + 0xbc);
      *(undefined1 *)((long)puVar14 + 0x25) = *(undefined1 *)(lVar9 + 0xbd);
      *(undefined1 *)((long)puVar14 + 0x26) = *(undefined1 *)(lVar9 + 0xbe);
      *(char *)((long)puVar14 + 0x27) = pcVar1[0x2d];
      *(undefined2 *)(puVar14 + 5) = *(undefined2 *)(pcVar1 + 0x3a);
      *(undefined2 *)((long)puVar14 + 0x2a) = *(undefined2 *)(pcVar1 + 0x3c);
      *(char *)((long)puVar14 + 0x2c) = pcVar1[0x39];
      bVar5 = *(byte *)(lVar9 + 0xbf); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(byte *)((long)puVar14 + 0x2d) = *(byte *)((long)puVar14 + 0x2d) & 0x80 | bVar5 & 0x7f;
      *(byte *)((long)puVar14 + 0x2d) = bVar5 & 0x7f | *(char *)(lVar9 + 0xc0) << 7;
      *(undefined1 *)((long)puVar14 + 0x2e) = *(undefined1 *)(lVar9 + 0xc1);
      uVar7 = *(undefined1 *)(lVar9 + 0x91); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined2 *)(puVar14 + 6) = 0;
      *(undefined1 *)((long)puVar14 + 0x32) = 0;
      *(undefined1 *)((long)puVar14 + 0x2f) = uVar7;
      *(undefined1 *)((long)puVar14 + 0x33) = *(undefined1 *)(lVar9 + 0x93);
      *(undefined4 *)((long)puVar14 + 0x34) = *(undefined4 *)(pcVar1 + 0x26);
      if (param_2 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
        *(undefined4 *)(param_2 + 3) = 0;
        *param_2 = 0;
        param_2[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        param_2[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined2 *)(param_2 + 1) = *(undefined2 *)(lVar9 + 0x5e);
        *(undefined4 *)param_2 = *(undefined4 *)(lVar9 + 0x68);
        *(undefined1 *)((long)param_2 + 4) = *param_4;
        *(undefined2 *)((long)param_2 + 10) = *(undefined2 *)(param_4 + 2);
        *(undefined2 *)((long)param_2 + 0xc) = *(undefined2 *)(param_4 + 4);
        *(undefined2 *)((long)param_2 + 0xe) = *(undefined2 *)(param_4 + 6);
        *(undefined2 *)(param_2 + 2) = *(undefined2 *)(param_4 + 8);
        *(undefined2 *)((long)param_2 + 0x12) = *(undefined2 *)(param_4 + 10);
        *(undefined2 *)((long)param_2 + 0x14) = *(undefined2 *)(param_4 + 0xc);
        *(undefined2 *)((long)param_2 + 0x16) = *(undefined2 *)(param_4 + 0xe);
      } // [自动静态注释] 作用域/控制流边界
      uVar17 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto LAB__text__0060b45c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    pcVar1 = pcVar1 + (ulong)*(ushort *)(pcVar1 + 1) + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar10 = FUN__text__0060e994(auStack_60,pcVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } while( true ); // [自动静态注释] 循环/迭代
} // [自动静态注释] 作用域/控制流边界


