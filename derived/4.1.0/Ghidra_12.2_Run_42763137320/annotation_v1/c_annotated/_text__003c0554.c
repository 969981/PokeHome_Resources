/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002C0554
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c0554; name: FUN_.text__003c0554
 */


void FUN__text__003c0554(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(char *)(param_1 + 0x62) != '\0') { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar11 = FUN__text__00119a44(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar12 = FUN__text__00119a5c(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar13 = FUN__text__00119a64(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar14 = FUN__text__00119a84(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 *)(param_1 + 0x70) = uVar11;
  *(undefined8 *)(param_1 + 0x78) = uVar12;
  *(undefined8 *)(param_1 + 0x80) = uVar13;
  *(undefined8 *)(param_1 + 0x88) = uVar14;
  if (*(char *)(param_1 + 0xb8) != '\0') { // [自动静态注释] 条件判断/分支
    uVar11 = *(undefined8 *)(param_2 + 0x120); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar1 = FUN__text__0011b4d8(uVar11); // [自动静态注释] 调用尚未恢复正式名称的函数
    bVar2 = FUN__text__0011b4e0(uVar11); // [自动静态注释] 调用尚未恢复正式名称的函数
    bVar3 = FUN__text__0011b4f8(uVar11); // [自动静态注释] 调用尚未恢复正式名称的函数
    bVar4 = FUN__text__0011b510(uVar11); // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar5 = FUN__text__0011b528(uVar11); // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar6 = FUN__text__0011b530(uVar11); // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar7 = FUN__text__0011b548(uVar11); // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar8 = FUN__text__0011b550(uVar11); // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar9 = FUN__text__0011b538(uVar11); // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar10 = FUN__text__0011b540(uVar11); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(byte *)(param_1 + 0x9a) = bVar3 & 1;
    *(byte *)(param_1 + 0x9b) = bVar4 & 1;
    *(int *)(param_1 + 0x9c) = iVar5 + -0x280;
    *(int *)(param_1 + 0xa0) = 0x168 - iVar6;
    *(int *)(param_1 + 0xa4) = iVar7 + -0x280;
    *(int *)(param_1 + 0xa8) = 0x168 - iVar8;
    *(byte *)(param_1 + 0x98) = bVar1 & 1;
    *(byte *)(param_1 + 0x99) = bVar2 & 1;
    *(int *)(param_1 + 0xac) = iVar9 + -0x280;
    *(int *)(param_1 + 0xb0) = 0x168 - iVar10;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


