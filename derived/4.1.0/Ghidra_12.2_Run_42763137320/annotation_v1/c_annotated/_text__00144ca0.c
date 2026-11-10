/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00044CA0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00144ca0; name: FUN_.text__00144ca0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00144ca0(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uStack_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uStack_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uStack_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar2 = *(long *)(*_DAT_0089f4f0 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00145fe0(&local_28,lVar2,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar2 = *(long *)(local_28 + 0x118); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_70 = *(undefined8 *)(lVar2 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_60 = *(undefined8 *)(lVar2 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_50 = *(undefined8 *)(lVar2 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_40 = *(undefined8 *)(lVar2 + 0x90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_58 = *(ulong *)(lVar2 + 0x78) & 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_38 = *(ulong *)(lVar2 + 0x98) & 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_68 = *(ulong *)(lVar2 + 0x68) & 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_48 = *(ulong *)(lVar2 + 0x88) & 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = **(uint **)(*(long *)(*param_1 + 0x238) + 0x310); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((uVar1 & 1) == 0) { // [自动静态注释] 条件判断/分支
    if ((uVar1 >> 1 & 1) != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__006d6b30(param_1,&local_70); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__006d6618(param_1,&local_70); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  if (local_28 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


