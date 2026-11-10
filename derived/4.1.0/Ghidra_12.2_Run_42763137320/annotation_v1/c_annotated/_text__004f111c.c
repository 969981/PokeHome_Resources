/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003F111C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f111c; name: FUN_.text__004f111c
 */


bool FUN__text__004f111c(undefined4 param_1,long param_2,long param_3,long param_4,int param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                        long *param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_68 = 0x400000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = FUN__text__004ef680(*(undefined8 *)(param_2 + 0x80),*(undefined4 *)(param_4 + 4)); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar3 == 0) { // [自动静态注释] 条件判断/分支
    iVar1 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar7 = *(long *)(param_2 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(short *)(lVar3 + 0x1a) == 0x10) { // [自动静态注释] 条件判断/分支
      uVar8 = *(undefined8 *)(param_2 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar6 = *(long *)(*(long *)(lVar7 + 0x10) + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar4 = FUN__text__004ec6d4(lVar7); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar5 = FUN__text__004ec6e4(lVar7); // [自动静态注释] 调用尚未恢复正式名称的函数
      iVar1 = FUN__text__004e717c(lVar6 + 0x58,param_2,uVar8,lVar3,uVar4,&local_68,uVar5, // [自动静态注释] 调用尚未恢复正式名称的函数
                                  *(undefined4 *)(param_3 + 0x30),*(undefined4 *)(param_3 + 0x34),
                                  param_5,&local_78); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar3 = local_78 + 0x58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar8 = *(undefined8 *)(param_2 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar4 = FUN__text__004ec6d4(lVar7); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar5 = FUN__text__004ec6e4(lVar7); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar2 = FUN__text__004ec6f4(lVar7); // [自动静态注释] 调用尚未恢复正式名称的函数
      iVar1 = FUN__text__004e81d4(param_1,param_2,uVar8,lVar3,uVar4,&local_68,uVar5,uVar2 & 1, // [自动静态注释] 调用尚未恢复正式名称的函数
                                  param_4,*(undefined4 *)(param_3 + 0x34), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                                  *(int *)(param_3 + 0x38) + param_5,&local_78);
      lVar3 = local_78 + 0x388; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    lVar7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (local_78 != 0) { // [自动静态注释] 条件判断/分支
      lVar7 = lVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *param_6 = lVar7;
  } // [自动静态注释] 作用域/控制流边界
  return iVar1 == 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


