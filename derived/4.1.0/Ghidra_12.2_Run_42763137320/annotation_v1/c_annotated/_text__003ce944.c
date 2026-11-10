/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002CE944
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ce944; name: FUN_.text__003ce944
 */


void FUN__text__003ce944(long param_1,byte param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(byte *)(param_1 + 0x330) != (param_2 & 1)) { // [自动静态注释] 条件判断/分支
    lVar3 = param_1 + -0x60; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((param_2 & 1) == 0) { // [自动静态注释] 条件判断/分支
      uVar4 = 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar2 = 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(byte *)(*(long *)(param_1 + 0x328) + 0x58) =
           *(byte *)(*(long *)(param_1 + 0x328) + 0x58) | 1;
      uVar1 = (**(code **)(*(long *)(param_1 + -0x60) + 0xc0))(lVar3,4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__003c4b88(0,lVar3,uVar1,1,1); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar4 = 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar2 = 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    uVar1 = (**(code **)(*(long *)(param_1 + -0x60) + 0xc0))(lVar3,uVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__003c4b88(0,lVar3,uVar1,1,param_2 & 1); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar1 = (**(code **)(*(long *)(param_1 + -0x60) + 0xc0))(lVar3,uVar4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__003c4c40(lVar3,uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(byte *)(param_1 + 0x330) = param_2 & 1;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


