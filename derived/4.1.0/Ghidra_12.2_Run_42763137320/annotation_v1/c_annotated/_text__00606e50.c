/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00506E50
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00606e50; name: FUN_.text__00606e50
 */


void FUN__text__00606e50(undefined8 param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ushort uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_60 [32]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar7 = FUN__text__0062c660(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((uVar7 & 1) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__0060eea4(auStack_60); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__0060efe0(auStack_60,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar2 = FUN__text__0060fed0(auStack_60); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar3 = FUN__text__00615940(auStack_60); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar4 = FUN__text__00610350(auStack_60); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar4 = FUN__text__00637870(uVar2,uVar3,uVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar1 = FUN__text__005ffc50(uVar2,uVar3,7); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (uVar1 != 0) { // [自动静态注释] 条件判断/分支
      uVar8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        uVar5 = FUN__text__00600044(uVar2,uVar3,uVar8,7); // [自动静态注释] 调用尚未恢复正式名称的函数
        uVar7 = FUN__text__00645628(uVar2,uVar3,uVar5,uVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
        if (((uVar7 & 1) != 0) && (iVar6 = FUN__text__00645570(uVar5), -1 < iVar6)) { // [自动静态注释] 条件判断/分支
          FUN__text__00621d90(auStack_60,iVar6,1); // [自动静态注释] 调用尚未恢复正式名称的函数
        } // [自动静态注释] 作用域/控制流边界
        uVar8 = uVar8 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (uVar1 != uVar8); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__0060eef8(auStack_60); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


