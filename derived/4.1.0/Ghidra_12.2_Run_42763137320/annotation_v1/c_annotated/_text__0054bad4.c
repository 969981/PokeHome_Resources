/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0044BAD4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0054bad4; name: FUN_.text__0054bad4
 */


undefined8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__0054bad4(long param_1,undefined8 param_2,undefined8 param_3,long param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                   undefined4 *param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(long *)(param_1 + 0x18) = param_4;
  uVar5 = *(undefined8 *)(param_4 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = *(undefined8 *)(param_4 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = *(undefined8 *)(param_4 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x38) = uVar5;
  uVar3 = *(undefined8 *)(param_4 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = *(undefined8 *)(param_4 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = *(undefined8 *)(param_4 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_4 + 0x38);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  FUN__text__0054b514(param_4,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(char *)(param_1 + 0x6c) == '\0') { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 0x3c) = 0;
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(param_1 + 0x28) = param_3;
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x58);
  uVar6 = param_5[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(char *)(param_1 + 0x6e) == '\0') { // [自动静态注释] 条件判断/分支
    uVar6 = uVar6 & 0xffff7f00 | uVar6 + ((int)(uVar6 << 0x10) >> 0x1f) & 0xff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if ((((uVar6 ^ 0xffffffff) & 0x7000) == 0) && (*(char *)(param_1 + 0x6d) == '\0')) { // [自动静态注释] 条件判断/分支
    uVar6 = uVar6 & 0xffffbf00 | uVar6 + ((int)(uVar6 << 0x11) >> 0x1f) & 0xff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(uint *)(param_1 + 0xb8) = uVar6 & 0xff;
  uVar2 = *param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0xbc) = uVar2;
  uVar3 = FUN__text__0054bc70(param_1,uVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((((int)uVar3 == 1) && (*(char *)(param_1 + 0x6c) != '\0')) && ((uVar6 & 0xff) != 0)) { // [自动静态注释] 条件判断/分支
    puVar4 = (undefined8 *) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
             (**(code **)(**(long **)(param_1 + 0x20) + 0x10)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                       (*(long **)(param_1 + 0x20),0x10,0x70b09e,0x85); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (puVar4 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined8 **)(param_1 + 0x10) = puVar4;
      uVar3 = *(undefined8 *)(param_1 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar5 = (**(code **)(**(long **)(param_1 + 0x28) + 0x10))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar3 = FUN__text__0054bdd0(puVar4,uVar3,uVar5,uVar6,*(undefined4 *)(param_1 + 0xbc), // [自动静态注释] 调用尚未恢复正式名称的函数
                                  param_1 + 0x40); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return uVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    uVar3 = 0x34; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0x10) = 0;
  } // [自动静态注释] 作用域/控制流边界
  return uVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


