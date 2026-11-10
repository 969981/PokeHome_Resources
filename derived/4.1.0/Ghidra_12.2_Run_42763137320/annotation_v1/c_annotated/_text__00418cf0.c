/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00318CF0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00418cf0; name: FUN_.text__00418cf0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00418cf0(undefined8 param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_60 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *local_50 [2]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *local_40 [2]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar5 = DAT_00ae9a88; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar2 = DAT_00ae99e0 != 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar3 = DAT_008ab01c != '\0'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(int *)(DAT_00ae9a88 + 8) != 0) { // [自动静态注释] 条件判断/分支
    uVar4 = nn::os::GetSystemTick(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(lVar5 + 0x40) = uVar4;
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00473680(_DAT_008ab03c); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00417660(); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00472950(); // [自动静态注释] 调用尚未恢复正式名称的函数
  for (lVar5 = DAT_00ae99f8; lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x20)) { // [自动静态注释] 循环/迭代
    FUN__text__00408588(lVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00418e30(local_40,bVar2 || bVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (bVar2 || bVar3) { // [自动静态注释] 条件判断/分支
    FUN__text__00413dc8(local_50,local_40); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__00419040(auStack_60,local_50); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__00413dc8(auStack_60,local_40); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  local_50[0] = (undefined8 *)0xffffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00412c50(local_40,local_50,0x10,8,0x717ffa,0,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  puVar1 = local_50[0]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (local_40[0] != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    *local_40[0] = 0x887508;
  } // [自动静态注释] 作用域/控制流边界
  local_50[0] = (undefined8 *)0xffffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_40[0] = puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00413d68(param_1,local_40,1,local_58); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


