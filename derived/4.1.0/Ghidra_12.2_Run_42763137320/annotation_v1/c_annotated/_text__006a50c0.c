/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005A50C0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a50c0; name: FUN_.text__006a50c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN__text__006a50c0(undefined8 *param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar2 = (*(code *)*_DAT_008a6960)(0x140,4,*_DAT_008a6970); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    *(long *)lVar2 = lVar2;
    *(long *)(lVar2 + 8) = lVar2;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    *(undefined8 *)(lVar2 + 0x20) = 0;
    *(long *)(lVar2 + 0x28) = lVar2 + 0x28;
    lVar1 = _DAT_008a69a0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(lVar2 + 0xaf) = 0;
    *(undefined8 *)(lVar2 + 0xe8) = 0;
    *(undefined4 *)(lVar2 + 0xef) = 0;
    *(undefined4 *)(lVar2 + 0x128) = 0;
    *(long *)(lVar2 + 0x30) = lVar2 + 0x28;
    *(long *)(lVar2 + 0x38) = lVar2 + 0x38;
    *(undefined8 *)(lVar2 + 0x50) = 0;
    *(undefined8 *)(lVar2 + 0x58) = 0;
    *(long *)(lVar2 + 0x40) = lVar2 + 0x38;
    *(long *)(lVar2 + 0x48) = lVar1 + 0x10;
    *(long *)(lVar2 + 0x70) = lVar2 + 0x70;
    *(long *)(lVar2 + 0x78) = lVar2 + 0x70;
    *(undefined8 *)(lVar2 + 0x80) = 0;
    *(long *)(lVar2 + 0x88) = lVar2 + 0x88;
    *(long *)(lVar2 + 0x90) = lVar2 + 0x88;
    *(undefined8 *)(lVar2 + 0x98) = 0;
    *(long *)(lVar2 + 200) = lVar2 + 200;
    *(long *)(lVar2 + 0xd0) = lVar2 + 200;
    *(long *)(lVar2 + 0x130) = lVar2 + 0x130;
    *(long *)(lVar2 + 0x138) = lVar2 + 0x130;
    *(undefined1 *)(lVar2 + 0xb0) = 1;
    *(undefined1 *)(lVar2 + 0xf0) = 1;
    *(undefined8 *)(lVar2 + 0x60) = 0;
    *(undefined8 *)(lVar2 + 0x68) = 0;
    *(undefined8 *)(lVar2 + 0xa0) = 0;
    *(undefined8 *)(lVar2 + 0xa8) = 0;
    *(undefined8 *)(lVar2 + 0xb8) = 0;
    *(undefined8 *)(lVar2 + 0xc0) = 0;
    *(undefined8 *)(lVar2 + 0xd8) = 0;
    *(undefined8 *)(lVar2 + 0xe0) = 0;
    *(undefined8 *)(lVar2 + 0xf8) = 0;
    *(undefined8 *)(lVar2 + 0x100) = 0;
    *(undefined8 *)(lVar2 + 0x108) = 0;
    *(undefined8 *)(lVar2 + 0x110) = 0;
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__006a5720(param_1,lVar2,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__006a5b50(lVar2,*param_1,param_1[1],param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__006a5ea0(param_1,lVar2,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__006a60d0(param_1,lVar2,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(uint *)(lVar2 + 0x128) = (uint)*(byte *)(param_2 + 0x60);
  if (*(char *)(param_2 + 0x40) != '\0') { // [自动静态注释] 条件判断/分支
    uVar3 = (**(code **)(**(long **)(param_1[1] + 0x18) + 0x78)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                      (*(long **)(param_1[1] + 0x18),(char *)(param_2 + 0x40),1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined8 *)(lVar2 + 0x110) = uVar3;
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__006a6570(lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  return lVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


