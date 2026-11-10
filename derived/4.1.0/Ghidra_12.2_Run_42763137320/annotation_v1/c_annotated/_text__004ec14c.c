/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003EC14C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ec14c; name: FUN_.text__004ec14c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004ec14c(long *param_1,undefined4 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_2c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 local_24; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_22; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = param_1[0xb]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(short *)(param_1 + 0xb) = (short)lVar1 + 1;
  if ((short)lVar1 == 0) { // [自动静态注释] 条件判断/分支
    if (param_1[8] != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__0042f65c(0,*_DAT_008a4648,param_1[8],0x4000000,*param_2,param_2[1],0); // [自动静态注释] 调用尚未恢复正式名称的函数
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    local_30 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_2c = param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_48 = param_1 + 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_40 = 0x4000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_38 = 0x3f800000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_28 = 0x1c; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_24 = 0x100; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_22 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar1 = FUN__text__0042f18c(*_DAT_008a4648,&local_48,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    param_1[8] = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar1 == 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*param_1 + 0x60))(local_38._4_4_,param_1,local_40,1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


