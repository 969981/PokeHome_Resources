/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：PH4_ToSV
 * 用途/行为：PH4 Core/Tag5 → PK9 转换
 * 证据等级：VERIFIED_NATIVE_STATIC；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0060e1f0; name: FUN_.text__0060e1f0
 */


undefined8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__0060e1f0(undefined4 *param_1,undefined8 *param_2,undefined8 param_3,undefined1 *param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  char *pcVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 *puVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 *puVar16; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar17; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar19; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar20; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_70 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__0060e76c(auStack_70,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  puVar10 = (undefined8 *)FUN__text__0060e7f8(auStack_70); // [自动静态注释] 调用尚未恢复正式名称的函数
  pcVar1 = (char *)(local_68 + 0xd8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar11 = FUN__text__0060e994(auStack_70,pcVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  do { // [自动静态注释] 循环/迭代
    if ((uVar11 & 1) == 0) { // [自动静态注释] 条件判断/分支
      uVar19 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__0060e708: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__0060e79c(auStack_70); // [自动静态注释] 调用尚未恢复正式名称的函数
      return uVar19; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if (*pcVar1 == '\x05') { // [自动静态注释] 条件判断/分支
      memset(param_1,0,0x148); // [自动静态注释] 内存复制、清零或移动
      *param_1 = *(undefined4 *)(puVar10 + 1);
      bVar5 = *(byte *)((long)puVar10 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined2 *)((long)param_1 + 6) = 0;
      *(ushort *)(param_1 + 1) = (bVar5 & 1) << 2;
      puVar12 = (undefined2 *)FUN__text__0064b000(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      puVar13 = (undefined8 *)FUN__text__0064b028(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      puVar14 = (undefined8 *)FUN__text__0064b050(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      puVar15 = (undefined8 *)FUN__text__0064b078(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar8 = FUN__text__005fdb18(*(undefined2 *)((long)puVar10 + 0xd)); // [自动静态注释] 调用尚未恢复正式名称的函数
      *puVar12 = uVar8;
      uVar7 = puVar12[7]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar12[1] = *(undefined2 *)((long)puVar10 + 0xc2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(puVar12 + 2) = *(undefined4 *)((long)puVar10 + 0xf);
      *(undefined4 *)(puVar12 + 4) = *(undefined4 *)((long)puVar10 + 0x13);
      puVar12[6] = *(undefined2 *)(pcVar1 + 0x3d); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar5 = pcVar1[0x3f]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar12[7] = uVar7 & 0xfffe | bVar5 & 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar2 = bVar5 & 1 | ((byte)pcVar1[0x3f] >> 1 & 1) << 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar12[7] = uVar7 & 0xfffc | uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar2 = uVar2 | ((byte)pcVar1[0x3f] >> 2 & 1) << 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar12[7] = uVar7 & 0xfff8 | uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar5 = *(byte *)(puVar12 + 0xd); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar12[7] = uVar7 & 0xfff0 | uVar2 | (*(byte *)((long)puVar10 + 0x17) & 1) << 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar12[8] = *(undefined2 *)(puVar10 + 3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(puVar12 + 10) = *(undefined4 *)((long)puVar10 + 0x1a);
      *(undefined1 *)(puVar12 + 0xc) = *(undefined1 *)((long)puVar10 + 0x1e);
      *(undefined1 *)((long)puVar12 + 0x19) = *(undefined1 *)((long)puVar10 + 0x1f);
      bVar6 = *(byte *)(puVar10 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(byte *)(puVar12 + 0xd) = bVar5 & 0xfe | bVar6 & 1;
      *(byte *)(puVar12 + 0xd) =
           (*(byte *)((long)puVar10 + 0x21) & 3) << 1 | bVar5 & 0xf8 | bVar6 & 1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      puVar16 = puVar12 + 0xe; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar16 = *(undefined2 *)((long)puVar10 + 0x22);
      *(undefined1 *)(puVar12 + 0xf) = *(undefined1 *)((long)puVar10 + 0x24);
      *(undefined1 *)((long)puVar12 + 0x1f) = *(undefined1 *)((long)puVar10 + 0x25);
      *(undefined1 *)(puVar12 + 0x10) = *(undefined1 *)((long)puVar10 + 0x26);
      *(undefined1 *)((long)puVar12 + 0x21) = *(undefined1 *)((long)puVar10 + 0x27);
      *(undefined1 *)(puVar12 + 0x11) = *(undefined1 *)(puVar10 + 5);
      *(undefined1 *)((long)puVar12 + 0x23) = *(undefined1 *)((long)puVar10 + 0x29);
      *(undefined1 *)(puVar12 + 0x12) = *(undefined1 *)((long)puVar10 + 0x2a);
      *(undefined1 *)((long)puVar12 + 0x25) = *(undefined1 *)((long)puVar10 + 0x2b);
      *(undefined1 *)(puVar12 + 0x13) = *(undefined1 *)((long)puVar10 + 0x2c);
      *(undefined1 *)((long)puVar12 + 0x27) = *(undefined1 *)((long)puVar10 + 0x2d);
      *(undefined1 *)(puVar12 + 0x14) = *(undefined1 *)((long)puVar10 + 0x2e);
      *(undefined1 *)((long)puVar12 + 0x29) = *(undefined1 *)((long)puVar10 + 0x2f);
      *(undefined4 *)(puVar12 + 0x16) = *(undefined4 *)(puVar10 + 6);
      *(undefined4 *)(puVar12 + 0x18) = *(undefined4 *)((long)puVar10 + 0x34);
      *(undefined1 *)(puVar12 + 0x1a) = *(undefined1 *)(puVar10 + 7);
      *(undefined1 *)((long)puVar12 + 0x35) = *(undefined1 *)((long)puVar10 + 0x39);
      *(undefined4 *)(puVar12 + 0x1c) = *(undefined4 *)((long)puVar10 + 0x3a);
      *(undefined4 *)(puVar12 + 0x1e) = *(undefined4 *)((long)puVar10 + 0x3e);
      *(undefined1 *)(puVar12 + 0x20) = *(undefined1 *)((long)puVar10 + 0x42);
      *(undefined1 *)((long)puVar12 + 0x41) = *(undefined1 *)((long)puVar10 + 0x43);
      *(char *)(puVar12 + 0x21) = pcVar1[3];
      uVar19 = *(undefined8 *)(pcVar1 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(puVar12 + 0x24) = *(undefined8 *)(pcVar1 + 0x45);
      *(undefined8 *)((long)puVar12 + 0x43) = uVar19;
      uVar19 = *(undefined8 *)((long)puVar10 + 0x44); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar17 = *(undefined8 *)((long)puVar10 + 0x4c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar18 = *(undefined8 *)((long)puVar10 + 0x54); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined2 *)(puVar13 + 3) = *(undefined2 *)((long)puVar10 + 0x5c);
      puVar13[1] = uVar17; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar13[2] = uVar18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar13 = uVar19;
      puVar20 = (undefined8 *)((long)puVar13 + 0x1a); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar20 = *(undefined8 *)(pcVar1 + 4);
      *(undefined4 *)((long)puVar13 + 0x22) = *(undefined4 *)(pcVar1 + 0xc);
      *(undefined4 *)((long)puVar13 + 0x26) = *(undefined4 *)(pcVar1 + 0x10);
      uVar4 = *(uint *)((long)puVar13 + 0x34); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)((long)puVar13 + 0x2a) = *(undefined8 *)(pcVar1 + 0x14);
      bVar5 = *(byte *)(puVar10 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(uint *)((long)puVar13 + 0x34) = uVar4 & 0xffffffe0 | bVar5 & 0x1f;
      uVar3 = bVar5 & 0x1f | (*(byte *)((long)puVar10 + 0x61) & 0x1f) << 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(uint *)((long)puVar13 + 0x34) = uVar4 & 0xfffffc00 | uVar3;
      uVar3 = uVar3 | (*(byte *)((long)puVar10 + 0x62) & 0x1f) << 10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(uint *)((long)puVar13 + 0x34) = uVar4 & 0xffff8000 | uVar3;
      uVar3 = uVar3 | (*(byte *)((long)puVar10 + 99) & 0x1f) << 0xf; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(uint *)((long)puVar13 + 0x34) = uVar4 & 0xfff00000 | uVar3;
      uVar3 = uVar3 | (*(byte *)((long)puVar10 + 100) & 0x1f) << 0x14; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(uint *)((long)puVar13 + 0x34) = uVar4 & 0xfe000000 | uVar3;
      uVar3 = uVar3 | (*(byte *)((long)puVar10 + 0x65) & 0x1f) << 0x19; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(uint *)((long)puVar13 + 0x34) = uVar4 & 0xc0000000 | uVar3;
      uVar3 = uVar3 | (*(byte *)((long)puVar10 + 0x66) & 1) << 0x1e; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(uint *)((long)puVar13 + 0x34) = uVar4 & 0x80000000 | uVar3;
      *(uint *)((long)puVar13 + 0x34) = uVar3 | (uint)*(byte *)((long)puVar10 + 0x67) << 0x1f;
      *(undefined2 *)((long)puVar13 + 0x32) = *(undefined2 *)((long)puVar10 + 0x5e);
      *(undefined4 *)(puVar13 + 7) = *(undefined4 *)(puVar10 + 0xd);
      *(char *)((long)puVar13 + 0x3c) = pcVar1[0x1c];
      *(char *)((long)puVar13 + 0x3d) = pcVar1[0x1d];
      uVar19 = *(undefined8 *)((long)puVar10 + 0x6c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar17 = *(undefined8 *)((long)puVar10 + 0x74); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar18 = *(undefined8 *)((long)puVar10 + 0x7c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined2 *)(puVar14 + 3) = *(undefined2 *)((long)puVar10 + 0x84);
      puVar14[1] = uVar17; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar14[2] = uVar18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar14 = uVar19;
      *(undefined1 *)((long)puVar14 + 0x1a) = *(undefined1 *)((long)puVar10 + 0x86);
      *(undefined1 *)((long)puVar14 + 0x1b) = *(undefined1 *)((long)puVar10 + 0x87);
      *(undefined1 *)((long)puVar14 + 0x1c) = *(undefined1 *)(puVar10 + 0x11);
      *(undefined2 *)((long)puVar14 + 0x1e) = *(undefined2 *)((long)puVar10 + 0x89);
      *(undefined1 *)(puVar14 + 4) = *(undefined1 *)((long)puVar10 + 0x8b);
      *(undefined1 *)((long)puVar14 + 0x21) = *(undefined1 *)((long)puVar10 + 0x8c);
      *(undefined1 *)((long)puVar14 + 0x22) = *(undefined1 *)((long)puVar10 + 0x8d);
      *(undefined1 *)((long)puVar14 + 0x23) = *(undefined1 *)((long)puVar10 + 0x8e);
      *(undefined2 *)((long)puVar14 + 0x24) = *(undefined2 *)((long)puVar10 + 0x8f);
      *(undefined1 *)((long)puVar14 + 0x26) = *(undefined1 *)((long)puVar10 + 0x91);
      *(undefined1 *)((long)puVar14 + 0x27) = *(undefined1 *)((long)puVar10 + 0x92);
      *(undefined1 *)((long)puVar14 + 0x2d) = *(undefined1 *)((long)puVar10 + 0x93);
      *(undefined4 *)(puVar14 + 5) = *(undefined4 *)((long)puVar10 + 0x94);
      *(undefined1 *)((long)puVar14 + 0x2c) = *(undefined1 *)(puVar10 + 0x13);
      uVar19 = *(undefined8 *)((long)puVar10 + 0x99); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar17 = *(undefined8 *)((long)puVar10 + 0xa1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar18 = *(undefined8 *)((long)puVar10 + 0xa9); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined2 *)(puVar15 + 3) = *(undefined2 *)((long)puVar10 + 0xb1);
      puVar15[1] = uVar17; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar15[2] = uVar18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar15 = uVar19;
      *(undefined1 *)((long)puVar15 + 0x1a) = *(undefined1 *)((long)puVar10 + 0xb3);
      *(undefined1 *)((long)puVar15 + 0x1b) = *(undefined1 *)((long)puVar10 + 0xb4);
      *(undefined1 *)((long)puVar15 + 0x1c) = *(undefined1 *)((long)puVar10 + 0xb5);
      *(undefined2 *)((long)puVar15 + 0x1e) = *(undefined2 *)((long)puVar10 + 0xb6);
      *(undefined1 *)(puVar15 + 4) = *(undefined1 *)(puVar10 + 0x17);
      *(undefined1 *)((long)puVar15 + 0x21) = *(undefined1 *)((long)puVar10 + 0xb9);
      *(undefined1 *)((long)puVar15 + 0x22) = *(undefined1 *)((long)puVar10 + 0xba);
      *(undefined1 *)((long)puVar15 + 0x23) = *(undefined1 *)((long)puVar10 + 0xbb);
      *(undefined1 *)((long)puVar15 + 0x24) = *(undefined1 *)((long)puVar10 + 0xbc);
      *(undefined1 *)((long)puVar15 + 0x25) = *(undefined1 *)((long)puVar10 + 0xbd);
      *(undefined1 *)((long)puVar15 + 0x26) = *(undefined1 *)((long)puVar10 + 0xbe);
      *(char *)((long)puVar15 + 0x27) = pcVar1[0x3c];
      *(undefined2 *)(puVar15 + 5) = *(undefined2 *)(pcVar1 + 0x1f);
      *(undefined2 *)((long)puVar15 + 0x2a) = *(undefined2 *)(pcVar1 + 0x21);
      *(char *)((long)puVar15 + 0x2c) = pcVar1[0x1e];
      bVar5 = *(byte *)((long)puVar10 + 0xbf); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(byte *)((long)puVar15 + 0x2d) = *(byte *)((long)puVar15 + 0x2d) & 0x80 | bVar5 & 0x7f;
      *(byte *)((long)puVar15 + 0x2d) = bVar5 & 0x7f | *(char *)(puVar10 + 0x18) << 7;
      *(undefined1 *)((long)puVar15 + 0x2e) = *(undefined1 *)((long)puVar10 + 0xc1);
      uVar19 = *(undefined8 *)(pcVar1 + 0x23); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar17 = *(undefined8 *)(pcVar1 + 0x2b); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar18 = *(undefined8 *)(pcVar1 + 0x33); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(char *)((long)puVar15 + 0x4f) = pcVar1[0x3b];
      *(undefined8 *)((long)puVar15 + 0x47) = uVar18;
      *(undefined8 *)((long)puVar15 + 0x3f) = uVar17;
      *(undefined8 *)((long)puVar15 + 0x37) = uVar19;
      FUN__text__006090f4((long)puVar15 + 0x2f,*puVar10); // [自动静态注释] 调用尚未恢复正式名称的函数
      iVar9 = FUN__text__005fdad0(*puVar12); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (iVar9 == 0x1df) { // [自动静态注释] 条件判断/分支
        FUN__text__0060933c(*puVar16,puVar20,(undefined4 *)((long)puVar13 + 0x22), // [自动静态注释] 调用尚未恢复正式名称的函数
                            (undefined4 *)((long)puVar13 + 0x26)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        iVar9 = FUN__text__005fdad0(*puVar12); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        iVar9 = FUN__text__005fdad0(*puVar12); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      if (iVar9 == 0x287) { // [自动静态注释] 条件判断/分支
        FUN__text__0060a400(puVar16,puVar20); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      if (param_2 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
        *param_2 = 0;
        param_2[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined1 *)param_2 = *param_4;
        *(undefined2 *)((long)param_2 + 2) = *(undefined2 *)(param_4 + 2);
        *(undefined2 *)((long)param_2 + 4) = *(undefined2 *)(param_4 + 4);
        *(undefined2 *)((long)param_2 + 6) = *(undefined2 *)(param_4 + 6);
        *(undefined2 *)(param_2 + 1) = *(undefined2 *)(param_4 + 8);
        *(undefined2 *)((long)param_2 + 10) = *(undefined2 *)(param_4 + 10);
        *(undefined2 *)((long)param_2 + 0xc) = *(undefined2 *)(param_4 + 0xc);
      } // [自动静态注释] 作用域/控制流边界
      uVar19 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto LAB__text__0060e708; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    pcVar1 = pcVar1 + (ulong)*(ushort *)(pcVar1 + 1) + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar11 = FUN__text__0060e994(auStack_70,pcVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } while( true ); // [自动静态注释] 循环/迭代
} // [自动静态注释] 作用域/控制流边界


