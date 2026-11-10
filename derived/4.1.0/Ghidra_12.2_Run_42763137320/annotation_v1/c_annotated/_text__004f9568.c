/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003F9568
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f9568; name: FUN_.text__004f9568
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__004f9568(long *param_1,char *param_2,undefined4 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  char *pcVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_34; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *local_18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_34 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_18 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar3 = (**(code **)(*param_1 + 0x80))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (iVar3 != 9) { // [自动静态注释] 条件判断/分支
    lVar2 = param_1[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar5 = *_DAT_008a4630; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = (**(code **)(*param_1 + 0x80))(param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__004aab84(uVar5,(int)lVar2,9,uVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
    return 0x5b; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar5 = FUN__text__004f70e0(param_1,&local_18,&local_34,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((int)uVar5 == 1) { // [自动静态注释] 条件判断/分支
    pcVar1 = local_18 + 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(bool *)(param_1 + 0x2d) = *local_18 != '\0';
    iVar3 = *(int *)(local_18 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_18 = pcVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar5 = FUN__text__004f96a0(param_1,pcVar1,pcVar1 + (uint)(iVar3 << 2),iVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((int)uVar5 == 1) { // [自动静态注释] 条件判断/分支
      pcVar1 = local_18 + (uint)(iVar3 * 5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_18 = pcVar1 + 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar4 = *(undefined4 *)pcVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(char *)((long)param_1 + 0x162) = pcVar1[4];
      uVar5 = FUN__text__004cc1ac(param_1 + 0x2a,local_18,uVar4,iVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return uVar5; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


