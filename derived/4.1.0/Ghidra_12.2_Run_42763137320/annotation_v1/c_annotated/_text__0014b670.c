/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0004B670
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0014b670; name: FUN_.text__0014b670
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0014b670(long param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_450; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_44c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_250 [520]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(char *)(param_1 + 0xd0) != '\0') { // [自动静态注释] 条件判断/分支
    lVar5 = *(long *)(*_DAT_0089f4f0 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_48 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar5 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__00145f44(&local_450,lVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__0014953c(auStack_250,CONCAT44(uStack_44c,local_450)); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (CONCAT44(uStack_44c,local_450) != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(CONCAT44(uStack_44c,local_450) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    if (*(long *)(param_1 + 0x68) != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__0014953c(&local_450); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__0014d25c(auStack_250,&local_450); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__0014821c(&local_450); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    lVar2 = FUN__text__0014d530(&local_450,param_2,0x715bd3); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    if (*(long *)(param_1 + 0x1d0) != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(*(long *)(param_1 + 0x1d0) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    *(long *)(param_1 + 0x1d0) = lVar2;
    lVar6 = *(long *)(*(long *)(param_1 + 0xf0) + 0xb0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar6 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    if (*(long *)(lVar2 + 0xb0) != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(*(long *)(lVar2 + 0xb0) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    *(long *)(lVar2 + 0xb0) = lVar6;
    lVar2 = *(long *)(param_1 + 0x1d0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar6 = *(long *)(*(long *)(param_1 + 0xf0) + 0x130); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar6 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    lVar3 = *(long *)(lVar2 + 0x130); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    *(long *)(lVar2 + 0x130) = lVar6;
    FUN__text__005c5e00(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x1d0)); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined1 *)(*(long *)(param_1 + 0x1d0) + 0xb8) = 1;
    *(undefined1 *)(*(long *)(param_1 + 0x1d0) + 0x1ac) = 1;
    FUN__text__0014ce28(&local_450,param_2,&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (*(long *)(param_1 + 0x1d8) != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(*(long *)(param_1 + 0x1d8) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    *(long *)(param_1 + 0x1d8) = CONCAT44(uStack_44c,local_450);
    uVar1 = FUN__text__005bfe00(*(undefined8 *)(CONCAT44(uStack_44c,local_450) + 0xb0),auStack_250); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar2 = *(long *)(param_1 + 0x1d8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(param_1 + 0x1e0) = uVar1;
    uVar4 = FUN__text__00145fcc(lVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_450 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = FUN__text__005bd8c0(*(undefined8 *)(lVar2 + 0xb0),uVar4,&local_450); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined4 *)(param_1 + 0x1e8) = uVar1;
    (**(code **)(**(long **)(param_1 + 0x1d0) + 0x78)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              (*(long **)(param_1 + 0x1d0),*(undefined8 *)(param_1 + 0x1d8)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__0014821c(auStack_250); // [自动静态注释] 调用尚未恢复正式名称的函数
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


