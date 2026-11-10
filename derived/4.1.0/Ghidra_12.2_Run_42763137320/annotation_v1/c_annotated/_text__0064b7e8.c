/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0054B7E8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064b7e8; name: FUN_.text__0064b7e8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0064b7e8(undefined8 *param_1,char *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  size_t sVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *__string; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  param_1[0xe] = (char *)param_1[7]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  strncpy((char *)param_1[7],param_2,0x1ffffff); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  __string = (char *)param_1[0xe]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  sVar1 = strnlen(__string,0x1ffffff); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(int *)(param_1 + 0xf) = (int)sVar1;
  puVar2 = param_1 + 0xd; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(int *)puVar2 = (int)sVar1;
  param_1[0x10] = __string; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00667b2c(*param_1,0x2f,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00667b2c(*param_1,0x4e2c,_DAT_008a6530); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00667b2c(*param_1,0x2719,puVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00667b2c(*param_1,0x3c,*(undefined4 *)puVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00667b2c(*param_1,0x4ec7,_DAT_008a6538); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00667b2c(*param_1,0x27b8,puVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


