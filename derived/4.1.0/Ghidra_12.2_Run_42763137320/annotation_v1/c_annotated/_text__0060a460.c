/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：FRLG_ToPH4
 * 用途/行为：FRLG 数据映射至 PH4 Core/Tag
 * 证据等级：VERIFIED_NATIVE_STATIC；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0060a460; name: FUN_.text__0060a460
 */


undefined8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__0060a460(undefined8 param_1,byte *param_2,undefined8 *param_3,undefined8 *param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  char *pcVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 *puVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar16; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar17; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_104; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_100; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_fc; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_f8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 local_f4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_f0 [48]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_c0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_b8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_b0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_a8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_a0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_98; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_90; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_88; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_80; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_60 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__0060e784(auStack_60,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__0060e804(auStack_60); // [自动静态注释] 调用尚未恢复正式名称的函数
  puVar12 = (undefined2 *)FUN__text__0060e7e4(auStack_60); // [自动静态注释] 调用尚未恢复正式名称的函数
  puVar13 = (undefined8 *)FUN__text__0060e7f8(auStack_60); // [自动静态注释] 调用尚未恢复正式名称的函数
  pcVar1 = (char *)(local_58 + 0xd8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_70 = (undefined1 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_68 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar14 = FUN__text__0060e994(auStack_60,pcVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  while ((uVar14 & 1) != 0) { // [自动静态注释] 循环/迭代
    if (*pcVar1 == '\x02') { // [自动静态注释] 条件判断/分支
      uVar16 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto LAB__text__0060aa34; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    pcVar1 = pcVar1 + (ulong)*(ushort *)(pcVar1 + 1) + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar14 = FUN__text__0060e994(auStack_60,pcVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__0060e8b0(auStack_60,&uStack_68,&local_70,2,0x48); // [自动静态注释] 调用尚未恢复正式名称的函数
  puVar15 = (undefined8 *)*param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_c0 = *puVar15; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_b8 = puVar15[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_a0 = puVar15[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_98 = puVar15[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_b0 = puVar15[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_a8 = puVar15[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_80 = puVar15[8]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_78 = puVar15[9]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_90 = puVar15[6]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_88 = puVar15[7]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0063e3f4(&local_c0); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__0063dcb4(auStack_f0,&local_c0); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar14 = FUN__text__0063df04(auStack_f0); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((uVar14 & 1) == 0) { // [自动静态注释] 条件判断/分支
    uVar16 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined8 *)(puVar12 + 1) = 0;
    *puVar12 = 4;
    *(undefined4 *)(puVar12 + 5) = 0;
    *puVar13 = 0;
    uVar9 = FUN__text__0063def8(auStack_f0); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined4 *)(puVar13 + 1) = uVar9;
    uVar5 = FUN__text__0063df44(auStack_f0); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined1 *)((long)puVar13 + 0xc) = uVar5;
    uVar8 = FUN__text__0063df80(auStack_f0); // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar10 = FUN__text__006029e4(uVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (iVar10 == 0) { // [自动静态注释] 条件判断/分支
      uVar16 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(short *)((long)puVar13 + 0xd) = (short)iVar10;
      uVar9 = FUN__text__0063df38(auStack_f0); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined4 *)((long)puVar13 + 0xf) = uVar9;
      uVar9 = FUN__text__0063df8c(auStack_f0); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined4 *)((long)puVar13 + 0x13) = uVar9;
      *(undefined2 *)((long)puVar13 + 0xc2) = 0;
      bVar6 = FUN__text__0063e108(auStack_f0); // [自动静态注释] 调用尚未恢复正式名称的函数
      *param_2 = bVar6 & 1;
      *(undefined1 *)((long)puVar13 + 0x17) = 0;
      uVar8 = FUN__text__00603114(auStack_f0); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined2 *)(puVar13 + 3) = uVar8;
      uVar9 = FUN__text__0063df38(auStack_f0); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar11 = FUN__text__0063def8(auStack_f0); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar9 = FUN__text__00602edc(uVar9,uVar11); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined4 *)((long)puVar13 + 0x1a) = uVar9;
      FUN__text__0063def8(auStack_f0); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar5 = FUN__text__00602bb0(); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined1 *)((long)puVar13 + 0x1e) = uVar5;
      *(undefined1 *)((long)puVar13 + 0x1f) = uVar5;
      FUN__text__0063df80(auStack_f0); // [自动静态注释] 调用尚未恢复正式名称的函数
      bVar6 = FUN__text__006031f8(); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(byte *)(puVar13 + 4) = bVar6 & 1;
      uVar9 = FUN__text__0063df80(auStack_f0); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar11 = FUN__text__0063def8(auStack_f0); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar5 = FUN__text__00602bcc(uVar9,uVar11); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined1 *)((long)puVar13 + 0x21) = uVar5;
      uVar9 = FUN__text__0063df80(auStack_f0); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar11 = FUN__text__0063def8(auStack_f0); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar8 = FUN__text__00602a78(uVar9,uVar11,*(undefined4 *)(param_3 + 1)); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined2 *)((long)puVar13 + 0x22) = uVar8;
      FUN__text__0063e020(auStack_f0,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar5 = FUN__text__00602ba0(); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined1 *)((long)puVar13 + 0x24) = uVar5;
      FUN__text__0063e020(auStack_f0,1); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar5 = FUN__text__00602ba0(); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined1 *)((long)puVar13 + 0x25) = uVar5;
      FUN__text__0063e020(auStack_f0,2); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar5 = FUN__text__00602ba0(); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined1 *)((long)puVar13 + 0x26) = uVar5;
      FUN__text__0063e020(auStack_f0,5); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar5 = FUN__text__00602ba0(); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined1 *)((long)puVar13 + 0x27) = uVar5;
      FUN__text__0063e020(auStack_f0,3); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar5 = FUN__text__00602ba0(); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined1 *)(puVar13 + 5) = uVar5;
      FUN__text__0063e020(auStack_f0,4); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar5 = FUN__text__00602ba0(); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined1 *)((long)puVar13 + 0x29) = uVar5;
      uVar5 = FUN__text__0063e094(auStack_f0,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined1 *)((long)puVar13 + 0x2a) = uVar5;
      uVar5 = FUN__text__0063e094(auStack_f0,1); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined1 *)((long)puVar13 + 0x2b) = uVar5;
      uVar5 = FUN__text__0063e094(auStack_f0,2); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined1 *)((long)puVar13 + 0x2c) = uVar5;
      uVar5 = FUN__text__0063e094(auStack_f0,3); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined1 *)((long)puVar13 + 0x2d) = uVar5;
      uVar5 = FUN__text__0063e094(auStack_f0,4); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined1 *)((long)puVar13 + 0x2e) = uVar5;
      uVar5 = FUN__text__0063e094(auStack_f0,5); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined1 *)((long)puVar13 + 0x2f) = uVar5;
      FUN__text__00602f20(&local_104,auStack_f0); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined4 *)(puVar13 + 6) = local_104;
      *(undefined4 *)((long)puVar13 + 0x34) = uStack_100;
      *(undefined2 *)(puVar13 + 7) = local_f4;
      *(undefined4 *)((long)puVar13 + 0x3a) = local_fc;
      *(undefined4 *)((long)puVar13 + 0x3e) = uStack_f8;
      uVar5 = FUN__text__00602c24(); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined1 *)((long)puVar13 + 0x42) = uVar5;
      uVar5 = FUN__text__00602d7c(); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined1 *)((long)puVar13 + 0x43) = uVar5;
      uVar16 = *(undefined8 *)((long)param_4 + 0xe); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar17 = *(undefined8 *)((long)param_4 + 0x16); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar8 = *(undefined2 *)((long)param_4 + 0x1e); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)((long)puVar13 + 0x44) = *(undefined8 *)((long)param_4 + 6);
      *(undefined2 *)((long)puVar13 + 0x5c) = uVar8;
      *(undefined8 *)((long)puVar13 + 0x54) = uVar17;
      *(undefined8 *)((long)puVar13 + 0x4c) = uVar16;
      *(undefined2 *)((long)puVar13 + 0x5e) = *(undefined2 *)((long)param_4 + 1);
      uVar5 = FUN__text__0063df98(auStack_f0,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined1 *)(puVar13 + 0xc) = uVar5;
      uVar5 = FUN__text__0063df98(auStack_f0,1); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined1 *)((long)puVar13 + 0x61) = uVar5;
      uVar5 = FUN__text__0063df98(auStack_f0,2); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined1 *)((long)puVar13 + 0x62) = uVar5;
      uVar5 = FUN__text__0063df98(auStack_f0,5); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined1 *)((long)puVar13 + 99) = uVar5;
      uVar5 = FUN__text__0063df98(auStack_f0,3); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined1 *)((long)puVar13 + 100) = uVar5;
      uVar5 = FUN__text__0063df98(auStack_f0,4); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined1 *)((long)puVar13 + 0x65) = uVar5;
      uVar5 = FUN__text__0063df54(auStack_f0); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined1 *)((long)puVar13 + 0x66) = uVar5;
      uVar5 = *(undefined1 *)param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar13[0x10] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar13[0x11] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar13[0xd] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined1 *)(puVar13 + 0x12) = 0;
      *(undefined1 *)((long)puVar13 + 0x67) = uVar5;
      puVar13[0xe] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar13[0xf] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__0063df70(auStack_f0); // [自动静态注释] 调用尚未恢复正式名称的函数
      cVar7 = FUN__text__00602dbc(); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (cVar7 == '\0') { // [自动静态注释] 条件判断/分支
        uVar16 = 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(char *)((long)puVar13 + 0x91) = cVar7;
        *(undefined1 *)((long)puVar13 + 0x92) = 0;
        FUN__text__0063df64(auStack_f0); // [自动静态注释] 调用尚未恢复正式名称的函数
        cVar7 = FUN__text__00602ddc(); // [自动静态注释] 调用尚未恢复正式名称的函数
        if (cVar7 == '\0') { // [自动静态注释] 条件判断/分支
          uVar16 = 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          *(char *)((long)puVar13 + 0x93) = cVar7;
          *(undefined4 *)((long)puVar13 + 0x94) = 0;
          *(undefined1 *)(puVar13 + 0x13) = 0xff;
          uVar14 = FUN__text__0063e1d8(auStack_f0); // [自动静态注释] 调用尚未恢复正式名称的函数
          uVar9 = FUN__text__0063df64(auStack_f0); // [自动静态注释] 调用尚未恢复正式名称的函数
          uVar14 = FUN__text__00602e64((long)puVar13 + 0x99,uVar14 & 0xffffffffffffff,uVar9); // [自动静态注释] 调用尚未恢复正式名称的函数
          if ((uVar14 & 1) == 0) { // [自动静态注释] 条件判断/分支
            uVar16 = 6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            *(undefined4 *)((long)puVar13 + 0xbb) = 0;
            *(undefined8 *)((long)puVar13 + 0xb3) = 0;
            FUN__text__0063e204(auStack_f0); // [自动静态注释] 调用尚未恢复正式名称的函数
            uVar5 = FUN__text__0060324c(); // [自动静态注释] 调用尚未恢复正式名称的函数
            *(undefined1 *)((long)puVar13 + 0xbf) = uVar5;
            FUN__text__0063e1f4(auStack_f0); // [自动静态注释] 调用尚未恢复正式名称的函数
            uVar5 = FUN__text__00602ed0(); // [自动静态注释] 调用尚未恢复正式名称的函数
            *(undefined1 *)(puVar13 + 0x18) = uVar5;
            *(undefined1 *)((long)puVar13 + 0xc1) = 0;
            *local_70 = 0;
            *(undefined4 *)(local_70 + 1) = 0;
            *(undefined2 *)(local_70 + 5) = *(undefined2 *)(param_4 + 4);
            *(undefined2 *)(local_70 + 7) = *(undefined2 *)((long)param_4 + 0x22);
            *(undefined2 *)(local_70 + 9) = *(undefined2 *)((long)param_4 + 0x24);
            *(undefined2 *)(local_70 + 0xb) = *(undefined2 *)((long)param_4 + 0x26);
            bVar6 = FUN__text__0063e11c(auStack_f0); // [自动静态注释] 调用尚未恢复正式名称的函数
            param_2[1] = bVar6 & 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(undefined8 *)(local_70 + 0x35) = 0;
            *(undefined8 *)(local_70 + 0x2d) = 0;
            *(undefined8 *)(local_70 + 0x25) = 0;
            *(undefined8 *)(local_70 + 0x1d) = 0;
            *(undefined8 *)(local_70 + 0x15) = 0;
            *(undefined8 *)(local_70 + 0xd) = 0;
            *(undefined2 *)(local_70 + 0x3d) = 0;
            FUN__text__0063e214(auStack_f0); // [自动静态注释] 调用尚未恢复正式名称的函数
            iVar10 = FUN__text__00602dac(); // [自动静态注释] 调用尚未恢复正式名称的函数
            if (iVar10 != 0) { // [自动静态注释] 条件判断/分支
              local_70[0x3f] = (char)iVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              uVar8 = FUN__text__0060325c(); // [自动静态注释] 调用尚未恢复正式名称的函数
              *(undefined2 *)(local_70 + 0x40) = uVar8;
              uVar8 = FUN__text__00603264(); // [自动静态注释] 调用尚未恢复正式名称的函数
              *(undefined2 *)(local_70 + 0x42) = uVar8;
              local_70[0x44] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              bVar3 = local_70[0x47]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              *(undefined2 *)(local_70 + 0x45) = *(undefined2 *)((long)param_4 + 4);
              bVar4 = *(char *)((long)param_4 + 3) == '\0'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              local_70[0x47] = bVar3 & 0xfe | bVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              bVar6 = bVar4 | (*(char *)((long)param_4 + 3) == '\x01') << 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              local_70[0x47] = bVar3 & 0xfc | bVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              local_70[0x47] = bVar3 & 0xf8 | bVar6 | (*(char *)((long)param_4 + 3) == '\x02') << 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              uVar16 = param_4[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              uVar2 = param_4[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              uVar17 = param_4[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              *(undefined8 *)(param_2 + 0x22) = param_4[4];
              *(undefined8 *)(param_2 + 0x1a) = uVar17;
              *(undefined8 *)(param_2 + 0x12) = uVar2;
              *(undefined8 *)(param_2 + 10) = uVar16;
              *(undefined8 *)(param_2 + 2) = *param_4;
              uVar16 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              goto LAB__text__0060aa3c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            } // [自动静态注释] 作用域/控制流边界
            uVar16 = 7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
LAB__text__0060aa34: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__0060342c(param_2 + 0x2c,uVar16); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar16 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__0060aa3c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__0060e79c(auStack_60); // [自动静态注释] 调用尚未恢复正式名称的函数
  return uVar16; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


