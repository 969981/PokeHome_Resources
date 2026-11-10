/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0035BC90
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045bc90; name: FUN_.text__0045bc90
 */


undefined8 * FUN__text__0045bc90(long param_1,undefined8 param_2,undefined4 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_178; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_170; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_168; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_160; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_158; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_150; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_148; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_140; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_138; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_130; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_128; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_120; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_118; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_110; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_108; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *local_100; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_f8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_f0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_ec; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_e8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *local_e0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_d8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char local_d0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_c8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
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
  undefined8 local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar7 = *(uint *)(param_1 + 0x148); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = *(uint *)(param_1 + 0x14c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar2 <= uVar7) { // [自动静态注释] 条件判断/分支
    iVar1 = uVar2 + (uVar2 >> 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar2 == 0) { // [自动静态注释] 条件判断/分支
      iVar1 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    uVar4 = FUN__text__0045c890(param_1 + 0x28,iVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((uVar4 & 1) == 0) { // [自动静态注释] 条件判断/分支
      return (undefined8 *)0x0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if (*(uint *)(param_1 + 0x14c) <= uVar7) { // [自动静态注释] 条件判断/分支
      return (undefined8 *)0x0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    uVar7 = *(uint *)(param_1 + 0x148); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  lVar6 = *(long *)(param_1 + 0x140); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(uint *)(param_1 + 0x148) = uVar7 + 1;
  if (lVar6 == 0) { // [自动静态注释] 条件判断/分支
    puVar5 = (undefined8 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar5 = (undefined8 *)(lVar6 + (ulong)uVar7 * 0x118); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__0045b8c8(puVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__0045b980(&local_178,*(undefined4 *)(*(long *)(param_1 + 0x158) + 0x160),param_2, // [自动静态注释] 调用尚未恢复正式名称的函数
                        param_3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar3 = local_d8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar5[2] = local_168; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar5[3] = uStack_160; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *puVar5 = local_178;
    puVar5[1] = uStack_170; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar5[9] = local_130; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar5[10] = uStack_128; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar5[7] = local_140; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar5[8] = uStack_138; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar5[0xd] = local_110; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar5[0xe] = uStack_108; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar5[0xb] = local_120; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar5[0xc] = uStack_118; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(puVar5 + 0x12) = local_e8;
    puVar5[0x10] = local_f8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar5[0x11] = CONCAT44(local_ec,local_f0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar5[0xf] = local_100; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar5[5] = uStack_150; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar5[6] = local_148; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar5[4] = local_158; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((puVar5[0x14] != 0) && // [自动静态注释] 条件判断/分支
       (pcVar8 = (char *)(lVar6 + (ulong)uVar7 * 0x118 + 0xa8), *pcVar8 != '\0')) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (**(code **)(*(long *)puVar5[0x13] + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *pcVar8 = '\0';
    } // [自动静态注释] 作用域/控制流边界
    puVar5[0x14] = lVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar5[0x13] = local_e0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar6 = lVar6 + (ulong)uVar7 * 0x118; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined1 *)(lVar6 + 0xb0) = local_c8;
    *(undefined8 *)(lVar6 + 200) = local_b0;
    *(undefined8 *)(lVar6 + 0xd0) = uStack_a8;
    *(undefined8 *)(lVar6 + 0xb8) = local_c0;
    *(undefined8 *)(lVar6 + 0xc0) = uStack_b8;
    *(undefined8 *)(lVar6 + 0xe8) = local_90;
    *(undefined8 *)(lVar6 + 0xf0) = uStack_88;
    *(undefined8 *)(lVar6 + 0xd8) = local_a0;
    *(undefined8 *)(lVar6 + 0xe0) = uStack_98;
    *(undefined1 *)(lVar6 + 0x110) = local_68;
    *(undefined8 *)(lVar6 + 0x100) = uStack_78;
    *(undefined8 *)(lVar6 + 0x108) = local_70;
    *(undefined8 *)(lVar6 + 0xf8) = local_80;
    FUN__text__0045cc00(&local_90); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__00451d7c(&uStack_b8); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__00451cdc(&uStack_b8); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (local_f8 != 0) { // [自动静态注释] 条件判断/分支
      local_f0 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (**(code **)(*local_100 + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      local_f8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_ec = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if ((local_d8 != 0) && (local_d0 != '\0')) { // [自动静态注释] 条件判断/分支
      (**(code **)(*local_e0 + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return puVar5; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


