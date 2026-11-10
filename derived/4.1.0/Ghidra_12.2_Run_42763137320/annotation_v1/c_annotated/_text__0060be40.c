/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：PLA_ToPH4
 * 用途/行为：阿尔宙斯 PA8 → PH4 Core/Tag3 转换
 * 证据等级：VERIFIED_NATIVE_STATIC；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0060be40; name: FUN_.text__0060be40
 */


undefined8 FUN__text__0060be40(undefined8 param_1,undefined4 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  char *pcVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 *puVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 *puVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte *local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_60 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__0060e784(auStack_60,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__0060e804(auStack_60); // [自动静态注释] 调用尚未恢复正式名称的函数
  puVar7 = (undefined2 *)FUN__text__0060e7e4(auStack_60); // [自动静态注释] 调用尚未恢复正式名称的函数
  puVar8 = (undefined8 *)FUN__text__0060e7f8(auStack_60); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_68 = (byte *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pcVar1 = (char *)(local_58 + 0xd8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar9 = FUN__text__0060e994(auStack_60,pcVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  do { // [自动静态注释] 循环/迭代
    if ((uVar9 & 1) == 0) { // [自动静态注释] 条件判断/分支
      FUN__text__0060e8b0(auStack_60,&local_38,&local_68,3,0x40); // [自动静态注释] 调用尚未恢复正式名称的函数
      puVar10 = (undefined2 *)FUN__text__00643ed4(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
      puVar11 = (undefined8 *)FUN__text__00643efc(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
      puVar12 = (undefined8 *)FUN__text__00643f24(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
      puVar13 = (undefined8 *)FUN__text__00643f4c(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined8 *)(puVar7 + 1) = 0;
      *puVar7 = 4;
      *(undefined4 *)(puVar7 + 5) = 0;
      uVar14 = FUN__text__006090ec((long)puVar13 + 0x3d); // [自动静态注释] 调用尚未恢复正式名称的函数
      *puVar8 = uVar14;
      *(undefined4 *)(puVar8 + 1) = *param_2;
      *(byte *)((long)puVar8 + 0xc) = *(byte *)(param_2 + 1) >> 2 & 1;
      *(undefined2 *)((long)puVar8 + 0xd) = *puVar10;
      *(undefined4 *)((long)puVar8 + 0xf) = *(undefined4 *)(puVar10 + 2);
      *(undefined4 *)((long)puVar8 + 0x13) = *(undefined4 *)(puVar10 + 4);
      *(undefined2 *)((long)puVar8 + 0xc2) = puVar10[1];
      *(byte *)((long)puVar8 + 0x17) = *(byte *)(puVar10 + 7) >> 3 & 1;
      *(undefined2 *)(puVar8 + 3) = puVar10[8];
      *(undefined4 *)((long)puVar8 + 0x1a) = *(undefined4 *)(puVar10 + 10);
      *(undefined1 *)((long)puVar8 + 0x1e) = *(undefined1 *)(puVar10 + 0xc);
      *(undefined1 *)((long)puVar8 + 0x1f) = *(undefined1 *)((long)puVar10 + 0x19);
      *(byte *)(puVar8 + 4) = *(byte *)(puVar10 + 0xd) & 1;
      *(byte *)((long)puVar8 + 0x21) = *(byte *)(puVar10 + 0xd) >> 2 & 3;
      *(undefined2 *)((long)puVar8 + 0x22) = puVar10[0xe];
      *(undefined1 *)((long)puVar8 + 0x24) = *(undefined1 *)(puVar10 + 0xf);
      *(undefined1 *)((long)puVar8 + 0x25) = *(undefined1 *)((long)puVar10 + 0x1f);
      *(undefined1 *)((long)puVar8 + 0x26) = *(undefined1 *)(puVar10 + 0x10);
      *(undefined1 *)((long)puVar8 + 0x27) = *(undefined1 *)((long)puVar10 + 0x21);
      *(undefined1 *)(puVar8 + 5) = *(undefined1 *)(puVar10 + 0x11);
      *(undefined1 *)((long)puVar8 + 0x29) = *(undefined1 *)((long)puVar10 + 0x23);
      *(undefined1 *)((long)puVar8 + 0x2a) = *(undefined1 *)(puVar10 + 0x12);
      *(undefined1 *)((long)puVar8 + 0x2b) = *(undefined1 *)((long)puVar10 + 0x25);
      *(undefined1 *)((long)puVar8 + 0x2c) = *(undefined1 *)(puVar10 + 0x13);
      *(undefined1 *)((long)puVar8 + 0x2d) = *(undefined1 *)((long)puVar10 + 0x27);
      *(undefined1 *)((long)puVar8 + 0x2e) = *(undefined1 *)(puVar10 + 0x14);
      *(undefined1 *)((long)puVar8 + 0x2f) = *(undefined1 *)((long)puVar10 + 0x29);
      *(undefined4 *)(puVar8 + 6) = *(undefined4 *)(puVar10 + 0x16);
      *(undefined4 *)((long)puVar8 + 0x34) = *(undefined4 *)(puVar10 + 0x18);
      *(undefined1 *)(puVar8 + 7) = *(undefined1 *)(puVar10 + 0x1a);
      *(undefined1 *)((long)puVar8 + 0x39) = *(undefined1 *)((long)puVar10 + 0x35);
      *(undefined4 *)((long)puVar8 + 0x3a) = *(undefined4 *)(puVar10 + 0x1c);
      *(undefined4 *)((long)puVar8 + 0x3e) = *(undefined4 *)(puVar10 + 0x1e);
      *(undefined1 *)((long)puVar8 + 0x42) = *(undefined1 *)(puVar10 + 0x24);
      *(undefined1 *)((long)puVar8 + 0x43) = *(undefined1 *)((long)puVar10 + 0x49);
      uVar14 = puVar11[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar2 = puVar11[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar6 = *(undefined2 *)(puVar11 + 3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar15 = *puVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined2 *)((long)puVar8 + 0x5e) = 0;
      *(undefined8 *)((long)puVar8 + 0x44) = uVar15;
      *(undefined2 *)((long)puVar8 + 0x5c) = uVar6;
      *(undefined8 *)((long)puVar8 + 0x54) = uVar2;
      *(undefined8 *)((long)puVar8 + 0x4c) = uVar14;
      *(byte *)(puVar8 + 0xc) = *(byte *)((long)puVar11 + 0x34) & 0x1f;
      *(byte *)((long)puVar8 + 0x61) = (byte)(*(uint *)((long)puVar11 + 0x34) >> 5) & 0x1f;
      *(byte *)((long)puVar8 + 0x62) = (byte)(*(uint *)((long)puVar11 + 0x34) >> 10) & 0x1f;
      *(byte *)((long)puVar8 + 99) = (byte)(*(uint *)((long)puVar11 + 0x34) >> 0xf) & 0x1f;
      *(byte *)((long)puVar8 + 100) = (byte)(*(uint *)((long)puVar11 + 0x34) >> 0x14) & 0x1f;
      *(byte *)((long)puVar8 + 0x65) =
           (byte)((uint)*(undefined4 *)((long)puVar11 + 0x34) >> 0x19) & 0x1f; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(byte *)((long)puVar8 + 0x66) =
           (byte)((uint)*(undefined4 *)((long)puVar11 + 0x34) >> 0x1e) & 1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar3 = *(undefined4 *)((long)puVar11 + 0x34); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(puVar8 + 0xd) = 0;
      *(byte *)((long)puVar8 + 0x67) = (byte)((uint)uVar3 >> 0x1f);
      uVar6 = *(undefined2 *)(puVar12 + 3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar14 = puVar12[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar2 = puVar12[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)((long)puVar8 + 0x6c) = *puVar12;
      *(undefined2 *)((long)puVar8 + 0x84) = uVar6;
      *(undefined8 *)((long)puVar8 + 0x7c) = uVar2;
      *(undefined8 *)((long)puVar8 + 0x74) = uVar14;
      *(undefined1 *)((long)puVar8 + 0x86) = *(undefined1 *)((long)puVar12 + 0x1a);
      *(undefined1 *)((long)puVar8 + 0x87) = *(undefined1 *)((long)puVar12 + 0x1b);
      *(undefined1 *)(puVar8 + 0x11) = *(undefined1 *)((long)puVar12 + 0x1c);
      *(undefined2 *)((long)puVar8 + 0x89) = *(undefined2 *)((long)puVar12 + 0x1e);
      *(undefined1 *)((long)puVar8 + 0x8b) = *(undefined1 *)(puVar12 + 4);
      *(undefined1 *)((long)puVar8 + 0x8c) = *(undefined1 *)((long)puVar12 + 0x21);
      *(undefined1 *)((long)puVar8 + 0x8d) = *(undefined1 *)((long)puVar12 + 0x22);
      *(undefined1 *)((long)puVar8 + 0x8e) = *(undefined1 *)((long)puVar12 + 0x23);
      *(undefined2 *)((long)puVar8 + 0x8f) = *(undefined2 *)((long)puVar12 + 0x24);
      *(undefined1 *)((long)puVar8 + 0x91) = *(undefined1 *)((long)puVar12 + 0x36);
      *(undefined1 *)((long)puVar8 + 0x92) = *(undefined1 *)((long)puVar12 + 0x37);
      *(undefined1 *)((long)puVar8 + 0x93) = *(undefined1 *)((long)puVar12 + 0x3a);
      *(undefined4 *)((long)puVar8 + 0x94) = *(undefined4 *)((long)puVar12 + 0x3c);
      *(undefined1 *)(puVar8 + 0x13) = *(undefined1 *)(puVar12 + 8);
      uVar6 = *(undefined2 *)(puVar13 + 3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar14 = puVar13[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar2 = puVar13[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)((long)puVar8 + 0x99) = *puVar13;
      *(undefined2 *)((long)puVar8 + 0xb1) = uVar6;
      *(undefined8 *)((long)puVar8 + 0xa9) = uVar2;
      *(undefined8 *)((long)puVar8 + 0xa1) = uVar14;
      *(undefined1 *)((long)puVar8 + 0xb3) = *(undefined1 *)((long)puVar13 + 0x1a);
      *(undefined1 *)((long)puVar8 + 0xb4) = *(undefined1 *)((long)puVar13 + 0x1b);
      *(undefined1 *)((long)puVar8 + 0xb5) = *(undefined1 *)((long)puVar13 + 0x1c);
      *(undefined2 *)((long)puVar8 + 0xb6) = *(undefined2 *)((long)puVar13 + 0x1e);
      *(undefined1 *)(puVar8 + 0x17) = *(undefined1 *)(puVar13 + 4);
      *(undefined1 *)((long)puVar8 + 0xb9) = *(undefined1 *)((long)puVar13 + 0x21);
      *(undefined1 *)((long)puVar8 + 0xba) = *(undefined1 *)((long)puVar13 + 0x22);
      *(undefined1 *)((long)puVar8 + 0xbb) = *(undefined1 *)((long)puVar13 + 0x23);
      *(undefined1 *)((long)puVar8 + 0xbc) = *(undefined1 *)((long)puVar13 + 0x24);
      *(undefined1 *)((long)puVar8 + 0xbd) = *(undefined1 *)((long)puVar13 + 0x25);
      *(undefined1 *)((long)puVar8 + 0xbe) = *(undefined1 *)((long)puVar13 + 0x26);
      *(byte *)((long)puVar8 + 0xbf) = *(byte *)((long)puVar13 + 0x2d) & 0x7f;
      *(byte *)(puVar8 + 0x18) = *(byte *)((long)puVar13 + 0x2d) >> 7;
      *(undefined1 *)((long)puVar8 + 0xc1) = *(undefined1 *)((long)puVar13 + 0x2e);
      *local_68 = *(byte *)(puVar10 + 7) >> 5 & 1;
      local_68[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined2 *)(local_68 + 2) = puVar10[0x1b];
      local_68[4] = *(byte *)(puVar10 + 0x25); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(local_68 + 5) = *(undefined8 *)(puVar10 + 0x26);
      *(undefined4 *)(local_68 + 0xd) = *(undefined4 *)(puVar10 + 0x2a);
      bVar4 = local_68[0x3f]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(local_68 + 0x11) = *(undefined8 *)((long)puVar11 + 0x2a);
      local_68[0x19] = *(byte *)((long)puVar11 + 0x44); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_68[0x1a] = *(byte *)((long)puVar11 + 0x45); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_68[0x1b] = *(byte *)((long)puVar11 + 0x46); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_68[0x1c] = *(byte *)((long)puVar11 + 0x47); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_68[0x1d] = *(byte *)(puVar11 + 9); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_68[0x1e] = *(byte *)((long)puVar11 + 0x49); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(local_68 + 0x1f) = *(undefined4 *)((long)puVar11 + 0x4c);
      *(undefined4 *)(local_68 + 0x23) = *(undefined4 *)(puVar11 + 10);
      local_68[0x27] = *(byte *)((long)puVar13 + 0x27); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(local_68 + 0x28) = *(undefined8 *)((long)puVar13 + 0x45);
      *(undefined8 *)(local_68 + 0x30) = *(undefined8 *)((long)puVar13 + 0x4d);
      *(undefined2 *)(local_68 + 0x38) = *(undefined2 *)(puVar13 + 5);
      *(undefined2 *)(local_68 + 0x3a) = *(undefined2 *)((long)puVar13 + 0x2a);
      local_68[0x3c] = *(byte *)(puVar10 + 0x15); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined2 *)(local_68 + 0x3d) = puVar10[6];
      bVar5 = *(byte *)(puVar10 + 7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_68[0x3f] = bVar4 & 0xfe | bVar5 & 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar5 = bVar5 & 1 | (*(byte *)(puVar10 + 7) >> 1 & 1) << 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_68[0x3f] = bVar4 & 0xfc | bVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar14 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_68[0x3f] = bVar4 & 0xf8 | bVar5 | *(byte *)(puVar10 + 7) & 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__0060c308: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__0060e79c(auStack_60); // [自动静态注释] 调用尚未恢复正式名称的函数
      return uVar14; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if (*pcVar1 == '\x03') { // [自动静态注释] 条件判断/分支
      uVar14 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto LAB__text__0060c308; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    pcVar1 = pcVar1 + (ulong)*(ushort *)(pcVar1 + 1) + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar9 = FUN__text__0060e994(auStack_60,pcVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } while( true ); // [自动静态注释] 循环/迭代
} // [自动静态注释] 作用域/控制流边界


