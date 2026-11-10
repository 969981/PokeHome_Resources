/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004BEB80
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005beb80; name: FUN_.text__005beb80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005beb80(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_29; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined8 *)(param_1 + 0x678) = 0;
  *(undefined8 *)(param_1 + 0x6f0) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x680) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x6a8) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x688) = 0;
  *(undefined8 *)(param_1 + 0x690) = 0;
  *(undefined8 *)(param_1 + 0x6a0) = 0;
  *(undefined8 *)(param_1 + 0x670) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x698) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x658) = 0;
  *(undefined8 *)(param_1 + 0x660) = 0x2d0050000000001;
  *(undefined4 *)(param_1 + 0x6f8) = 0x3f800000;
  local_28 = (undefined1 *)((ulong)local_28 & 0xffffffff00000000); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_30 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005bdfd0(param_1,&local_28,&local_30); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_30 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_28._0_4_ = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005bdfd0(param_1,&local_28,&local_30); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_30 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_28 = (undefined1 *)CONCAT44(local_28._4_4_,2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005bdfd0(param_1,&local_28,&local_30); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_30 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_28 = (undefined1 *)&local_30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = FUN__text__005c1080(param_1 + 0x730,&local_30,_DAT_008a01d8,&local_28,&uStack_29); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar1 = *(long *)(lVar1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = *(long *)(param_1 + 0x630); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(param_1 + 0x630) = lVar1;
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


