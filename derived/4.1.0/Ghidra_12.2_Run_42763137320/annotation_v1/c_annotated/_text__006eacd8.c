/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005EACD8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006eacd8; name: FUN_.text__006eacd8
 */


bool FUN__text__006eacd8(long param_1,undefined8 param_2,long *param_3,undefined4 param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined8 param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  bool bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(char *)(param_1 + 0x50) == '\0') { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(param_1 + 0x48) = param_5;
    *(undefined8 *)(param_1 + 0x178) = 0;
    *(undefined8 *)(param_1 + 0x180) = 0;
    local_50 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_48 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__006ebbe4(&local_50); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_60 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_58 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_70 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_68 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_50._4_4_ = param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__006ebc14(&local_70); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_70 = CONCAT44(local_70._4_4_,0x22); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = FUN__text__006ec37c(param_2,&local_50); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0x188) = uVar2;
    uVar2 = FUN__text__006ee660(param_2,&local_70); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar5 = *(long *)(param_1 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)(param_1 + 0x180) = lVar5;
    lVar3 = FUN__text__006ee668(param_2,&local_70); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar4 = (lVar5 + lVar3) - 1U & -lVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(ulong *)(param_1 + 0x180) = uVar4;
    local_68 = (**(code **)(*param_3 + 0x10))(param_3,uVar4,uVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar1 = local_68 != 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)(param_1 + 0x178) = local_68;
    if (local_68 != 0) { // [自动静态注释] 条件判断/分支
      local_70 = CONCAT44((int)*(undefined8 *)(param_1 + 0x180),(undefined4)local_70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__006ee680(param_1 + 0x58,param_2,&local_70); // [自动静态注释] 调用尚未恢复正式名称的函数
      local_50 = CONCAT44(local_50._4_4_,(int)*(undefined8 *)(param_1 + 0x48)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__006ec4cc(param_1,param_2,&local_50,param_1 + 0x58,0, // [自动静态注释] 调用尚未恢复正式名称的函数
                          *(undefined8 *)(param_1 + 0x180));
      *(undefined1 *)(param_1 + 0x50) = 1;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    bVar1 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return bVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


