/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005A2070
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a2070; name: FUN_.text__006a2070
 */


void FUN__text__006a2070(float param_1,long param_2,undefined8 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float local_24; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar2 = param_2 + 0xa0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = FUN__text__006cac30(lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
    lVar1 = FUN__text__006cac30(lVar2,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar5 = *(undefined4 *)(lVar1 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_24 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar1 = FUN__text__006caca0(lVar2,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__006c1ba0(*(undefined4 *)(lVar1 + 0x30),*(undefined4 *)(lVar1 + 0x34),&local_24); // [自动静态注释] 调用尚未恢复正式名称的函数
    fVar6 = *(float *)(lVar1 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (local_24 != fVar6) { // [自动静态注释] 条件判断/分支
      *(float *)(lVar1 + 0x40) = local_24;
      FUN__text__006cacf8(lVar2,lVar1 + 0x10,lVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
      for (lVar4 = *(long *)(lVar1 + 0x58); lVar4 != lVar1 + 0x50; lVar4 = *(long *)(lVar4 + 8)) { // [自动静态注释] 循环/迭代
        FUN__text__006cac88(fVar6,local_24,lVar2,lVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      lVar2 = FUN__text__006cac30(lVar2,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
      plVar3 = *(long **)(param_2 + 0xd8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (plVar3 != (long *)0x0) { // [自动静态注释] 条件判断/分支
        (**(code **)(*plVar3 + 0x20)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  (uVar5,*(undefined4 *)(lVar2 + 0x40),plVar3,*(undefined8 *)(param_2 + 8),param_3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


