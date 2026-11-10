/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003069B8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004069b8; name: FUN_.text__004069b8
 */


undefined8 FUN__text__004069b8(long param_1,undefined1 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_50 [24]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_38 [24]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *param_2 = 0;
  uVar1 = *(uint *)(param_1 + 0x60) >> 8 & 0xf; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((uVar1 < 4) && (((*(uint *)(param_1 + 0x60) & 0xff) != 0 || (uVar1 == 3)))) { // [自动静态注释] 条件判断/分支
    if ((*(char *)(param_1 + 0x554) != '\0') && (*(long *)(param_1 + 0x548) == 0)) { // [自动静态注释] 条件判断/分支
      FUN__text__0045cc78(auStack_38,*(undefined8 *)(param_1 + 0x28)); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar3 = FUN__text__00416430(auStack_38); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(long *)(param_1 + 0x548) = lVar3;
      if (lVar3 == 0) { // [自动静态注释] 条件判断/分支
        *param_2 = 1;
        lVar3 = FUN__text__00400f80(5,0x1c0); // [自动静态注释] 调用尚未恢复正式名称的函数
        if (lVar3 == 0) { // [自动静态注释] 条件判断/分支
          *(undefined8 *)(param_1 + 0x548) = 0;
          FUN__text__0045cca8(auStack_38); // [自动静态注释] 调用尚未恢复正式名称的函数
          return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
        FUN__text__004d3e64(); // [自动静态注释] 调用尚未恢复正式名称的函数
        *(undefined4 *)(lVar3 + 0x1b8) = 0xffffffff;
        *(byte *)(lVar3 + 0x1bc) = *(byte *)(lVar3 + 0x1bc) & 0xe8;
        *(long *)(param_1 + 0x548) = lVar3;
        FUN__text__0045cc84(auStack_50,auStack_38); // [自动静态注释] 调用尚未恢复正式名称的函数
        iVar2 = FUN__text__00416d54(lVar3,auStack_50,0); // [自动静态注释] 调用尚未恢复正式名称的函数
        FUN__text__0045cca8(auStack_50); // [自动静态注释] 调用尚未恢复正式名称的函数
        if (iVar2 != 1) { // [自动静态注释] 条件判断/分支
          FUN__text__00406af0(5,*(undefined8 *)(param_1 + 0x548)); // [自动静态注释] 调用尚未恢复正式名称的函数
          *(undefined8 *)(param_1 + 0x548) = 0;
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      FUN__text__0045cca8(auStack_38); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *(undefined1 *)(param_1 + 0x554) = 1;
  } // [自动静态注释] 作用域/控制流边界
  return *(undefined8 *)(param_1 + 0x548); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


