/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00144800
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00244800; name: FUN_.text__00244800
 */


void FUN__text__00244800(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar3 = *(long *)(param_1 + 0x598); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_50 = 0x2afb4647d629741e; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_48 = 0x715d3e; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_40 = 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = FUN__text__00137c10(*(undefined8 *)(param_1 + 0x60),&local_50); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_38 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = FUN__text__00139b48(uVar1,5,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003cf230(lVar3 + 0x20068,*(undefined8 *)(param_1 + 8),uVar2,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar2 = FUN__text__00139b48(uVar1,5,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003cf230(lVar3 + 0x400d0,*(undefined8 *)(param_1 + 8),uVar2,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar2 = FUN__text__00139b48(uVar1,5,2); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003cf230(lVar3 + 0x60138,*(undefined8 *)(param_1 + 8),uVar2,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar2 = FUN__text__00139b48(uVar1,5,3); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003cf230(lVar3 + 0x801a0,*(undefined8 *)(param_1 + 8),uVar2,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar2 = FUN__text__00139b48(uVar1,5,4); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003cf230(lVar3 + 0xa0208,*(undefined8 *)(param_1 + 8),uVar2,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar2 = FUN__text__00139b48(uVar1,5,5); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003cf230(lVar3 + 0xc0270,*(undefined8 *)(param_1 + 8),uVar2,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar2 = FUN__text__00139b48(uVar1,5,6); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003cf230(lVar3 + 0xe02d8,*(undefined8 *)(param_1 + 8),uVar2,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar1 = FUN__text__00139b48(uVar1,5,7); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003cf230(__nnDetailNintendoSdkRuntimeObjectFile + lVar3,*(undefined8 *)(param_1 + 8), // [自动静态注释] 调用尚未恢复正式名称的函数
                      uVar1,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


