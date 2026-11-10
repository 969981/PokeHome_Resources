/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005F5DF8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006f5df8; name: FUN_.text__006f5df8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006f5df8(long *param_1,char *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__006ebf50(); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar2 = nvnBootstrapLoader(0x70f430); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((*param_2 != '\0') && (pcVar3 = (code *)nvnBootstrapLoader(0x714de5), pcVar3 != (code *)0x0)) // [自动静态注释] 条件判断/分支
  { // [自动静态注释] 作用域/控制流边界
    (*pcVar3)(&DAT__text__006f2b2c,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__006ee770(0,uVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__006f21f4(0x37,0xf); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_40 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_50 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_48 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_60 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_58 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_70 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_68 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  (*(code *)*_DAT_008a7050)(&local_70); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  (*(code *)*_DAT_008a7058)(&local_70,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *param_1 = (long)(param_1 + 1);
  (*(code *)*_DAT_008a7068)(param_1 + 1,&local_70); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__006ee770(*param_1,uVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar1 = FUN__text__006f23c8(*param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined4 *)((long)param_1 + 0x300c) = uVar1;
  *(byte *)((long)param_1 + 0x3009) = *(byte *)((long)param_1 + 0x3009) & 0xfe;
  *(undefined1 *)(param_1 + 0x601) = 1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


